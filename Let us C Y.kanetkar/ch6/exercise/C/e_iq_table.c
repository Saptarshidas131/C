/*
	Author: AnOnYmOus001100
	Date: 28/07/2020
	Description: Calculate the approximate level of intelligence of a person
			using the formula i = 2 + (y + 0.5x)
			where y varies from 1 to 6 and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5
*/

#include<stdio.h>

int main()
{

	int y;
	float x, i;

	printf ("     i     |     y     |     x     ");
	printf ("\n---------------------------------------");

	for (y = 1; y <= 6; y++)
	{
		for (x = 5.5; x <= 12.5; x += 0.5)
		{
			i = 2 + (y + 0.5 * x);

			printf ("\n %f  |     %d    |   %f ",i,y,x);
		}
	}

	return 0;
} 
