/*
	Author: AnOnYmOus001100
	Date: 24/07/2020

	Description:	To print multiplication table of a number entered as input(prints upto 10 multiples)
*/

#include<stdio.h>

int main()
{
	int num, i;

	printf ("Enter a number: ");
	scanf ("%d",&num);

	for (i = 1; i <= 10; i++)
		printf ("\n%d * %d = %d",num,i,num*i);

	return 0;
}
