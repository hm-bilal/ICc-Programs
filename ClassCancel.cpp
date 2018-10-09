#include<stdio.h>
#include<conio.h>
int main()
{
	int n,k,std[50],count=0,i;
	printf("\nTotal strength \n");
	scanf("%d",&n);
	printf("Threshold \n");
	scanf("%d",&k);
	printf("Enter data\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&std[i]);
	}
	for(i=0;i<n;i++)
	{
		if(std[i]==1)
		{
			count++;
		}
	}
	if(count>k)
	{
		printf("Class canceled\n");
	}
	else
	{
		printf("Class not canceled\n");
	}
	getch();
}
