/*
	Author: AnOnYmOus001100
	Date: 03/07/2020
	Description: Find the natural algorithm by approximating the series:
	x-1/x + 1/2(x-1/x)^2 + 1/2(x-1/x)^3 + 1/2(x-1/x)^4 + ....
*/

#include<stdio.h>
#include<math.h>

int main()
{

	int p;
	float x, sum = 0, first = 0, exp = 0;

	printf ("Enter x: ");
	scanf ("%f",&x);

	for (int i = 1; i <= 7; i++)
	{
		p = i + 1;
		first =  (x - 1)/x;
		//printf ("\n\nfirst: %f",first);
		exp = (0.5 * pow(first,p));
		//printf ("\nexp: %f",exp);
		sum = sum + first + exp;
		//printf ("\nsum: %f",sum);
	}

	printf ("\n\nThe approximated reult upto first seven terms is : %f.",sum);

	return 0;
}
