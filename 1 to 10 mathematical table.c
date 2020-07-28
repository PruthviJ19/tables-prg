#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;/*initilize i,j*/
	for(i=1;i<=10;i++)/*i for loop condition*/
	for(j=1;j<=10;j++)/*j for loop condition*/ 
	printf("\n%d*%d=%d",i,j,i*j);/*number gets printed if both cond are true*/
	getch();
	}
