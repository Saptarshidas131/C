/*
Author: AnOnYmOus001100
Date: 25/07/2020 
Description: To check if the triangle is valid, when three of its sides is given as input.
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
	if ((s1 != 0 && s2 != 0 && s3 != 0) && (s1 + s2 > l) && (s2 + s3 > l) && (s3 + s1 > l))
		printf ("\nyes triangle is valid.");

	else
		printf ("\nNo triangle is not valid.");

	return 0;
}
