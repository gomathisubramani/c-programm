#include <stdio.h>
#include<string.h>
void main()
{
	printf("\t S.GOMATHI,\t ECE-A,\t 922515106033");
	int year,weeks,days;
	printf("enter the days");
	scanf("%d",&days);
	year=days/365;
	week=days/4;
	days=days/7;
	printf("\n%d\n%d\n%d",year,week,days);
