/*
	Author: AnOnYmOus001100
	Date: 28/07/2020
	Description: When interest compounds q times per year at an annual rate of r% for n years,
			the principal compounds to an amount as per the formula
			a = p(1 + r/q)^nq
			Calculate a for 10 sets of p, r, n & q.
*/

#include<stdio.h>
#include<math.h>

int main()
{
	float p, r, n, q;
	int input = 10;
	double a;
	
	while (input > 0)
	{
		printf ("Enter p, q, r and n: \n");
		scanf ("%f %f %f %f",&p,&q,&r,&n);

		a = pow(p*(1 + r/q),n*q);

		printf ("amount = %lf\n\n",a);
	
		input--;
	}
	
	return 0;
		
}	
