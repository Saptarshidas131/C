/*	
	Author: AnOnYmOus001100
	Date: 24/07/2020

	Description: To print first seven terms of the following series
	1/1! + 2/2! + 3/3! + ...
*/

#include<stdio.h>

int main()
{

	int i, j, fact;
	float  div, sum = 0;

	// loop to iterate 7 times
	for (i = 1; i <= 7; i++)
	{
		printf ("\n i is %d",i);
		fact = 1;
		
		if (i == 1)
			fact = 1;
		else
		{
			// loop to calculate factorial of i
			for (j = i; j > 0; j--)
				fact = fact*j;
		}

		printf ("\n Fact of %d is %d",i,fact);
			
		div = i/j;

		printf (" \n Divison value is %f",div);

		sum += div;

		printf ("\n Sum is %f",sum);
	}

	return 0;
}
