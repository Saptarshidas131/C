/*
Author: AnOnYmOus001100
Date: 25/07/2020 
Description: To check if the triangle is isoscles, equilateral, scalene or right angled triangled, when three of its sides is given as input.
*/

#include<stdio.h>

int main()
{

	int s1, s2, s3, l;

	printf ("Enter three sides of triangele: ");
	scanf ("%d %d %d",&s1,&s2,&s3);

	// find largest side
	if (s1 > s2 && s1 > s3)
		l = s1;
		
	else if (s2 > s3 && s2 > s1)
			l = s2;
	
	else
		l = s3;
	
	// checking validity of triangle
	if ((s1 != 0 && s2 != 0 && s3 != 0) && (s1 + s2 > l) && (s2 + s3 > l) && (s3 + s1 > l))	{
		// checking triangle type
		if (s1 == s2 == s3)				// all sides are equal
			printf ("\nEquilateral triangle.");
		
		else if((s1 == s2 || s2 == s3 || s1 == s3))	// assuming all sides are not equal, only two sides are equal
			printf ("\nIsoscles triangle.");	
		
		else
			printf ("\nScalene triangle.");		// no sides are equal
	}

	else
		printf ("\nTriangle is not valid.");		// in case triangle is not valid



	return 0;
}

