#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	int k=0;
	printf("\nPATTERN 1\n");
	for(i=0;i<=10;i++)
	{
		if(i<=5)
		{
			printf("\n");
		}
		else
		{
			for(j=0;j<(i-k-2);j++)
			{
				printf(" ");
			}
			for(j=0;j<i-5;j++)
			{
				printf("*");
			}
			
			printf("\n");
			k=k+2;
		}
		
	}
	printf("\nPATTERN 2\n");
	for(j=5;j>=0;j--)
	{
		for(i=0;i<=j;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\nPATTERN 3\n");
	{
		for(j=1;j<=5;j++)
		{
			for(i=1;i<=j;i++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	printf("\nPATTERN 4\n");
	 for(i=5;i>=0;i--)
	 {
	 }
	
	getch();
}
