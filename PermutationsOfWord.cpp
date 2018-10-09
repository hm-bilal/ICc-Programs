#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#define max 200
long fact(int n)
{
	long mul=1;
	int i;
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	return mul;
}
main()
{
	double perm=1 ;
	int freq[max],i,j=0,k,top=0,flag,count=0,l=0;
	char str[max],alpha[max];
	printf("\nEnter a string\n");
	gets(str);
	while(str[i++]!='\0')
	{
		count=0;
		flag=0;
		if(isalpha(str[i]))
		{
			for(k=0;k<=top;k++)
			{
				if(str[i]==alpha[k])
				{
					flag=1;
					break;
				}
			
			}
			if(flag!=1)
			{
				alpha[top]=str[i];
				top++;
			}
		}
		i++;
	}
	alpha[top]='\0';
	j=0;
	while(alpha[j]!='\0')
	{
		i=0;
		count=0;
		while(str[i]!='\0')
		{
			if(alpha[j]==str[i])
			{
				count++;
			}
			i++;
		}
		freq[j]=count;
		j++;
	}
	for(i=0;i<top;i++)
	{
		perm=perm*fact(freq[i]);
	}
	perm = fact(strlen(str))/perm;
	printf("Total permutations = %lf",perm);
	getch();
}
