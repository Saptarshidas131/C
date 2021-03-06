/*
	Author: AnOnYmOus001100
	Date: 03/08/2020
	Description: To generate all Pythagorean Tripletts with side length less than or equal to 30.
*/

#include<stdio.h>

int main()
{
	int a, b, c, i, j, k;

	for (i=1; i <= 30; i++)
	{
		a = i;
		for (j=1; j <= 30; j++)
		{	
			b = j;
			for (k=1; k <= 30; k++)
			{ 

				c = k;

				if (a*a + b*b == c*c)
					printf ("%d %d %d\n",a,b,c);
			}
		}
	}

return 0;
}
