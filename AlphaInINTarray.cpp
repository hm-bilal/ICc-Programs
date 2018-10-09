//Program to create integer array and store the values 10,20,A,40,50
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={10,20,'A',40,50},i;
	for(i=0;i<5;i++)
	{
		printf("%d  ",a[i]);
	}
	getch();
}
