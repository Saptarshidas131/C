/*	Author: AnOnYmOus001100
	Date: 24/06/2020

	Description: To print all prime numbers from 1 to 300
*/

#include<stdio.h>

int main()
{

	int i, j, factors = 0;

	// first loop to iterate from 1 to 300
	for (i = 1; i < 300; i++)
	{
		// inner loop to check prime
		for (j = 1; j  <= i; j++)
		{
			// increment factors by 1 if i is divisible by j
			if (i%j == 0)
				factors++;
		}
		
		// if any number is divisible by 1 and itself only then it is prime that is only 2 factors
		if (factors == 2)
			printf (" %d ",i);
	}

	return 0;
}
