#include<stdio.h>
int main()
{
	int days = 30,weeks,months,years;
	years = days/365;
	weeks = (days/7);
	months = days/30;
	printf("weeks = %d\n months=%d\n years = %d\n",weeks,months,years);
	
}

