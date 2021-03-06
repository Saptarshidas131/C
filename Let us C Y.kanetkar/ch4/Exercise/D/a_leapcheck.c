/*

Author: AnOnYmOus001100
	Date: 25/07/2020 

Description: To use conditionals to determine whether a year entered is leap year or not.
*/

#include<stdio.h>

int main()
{

	int year;

	printf ("Enter a year to check: ");
	scanf ("%d",&year);

	if (year % 400 == 0)
 		printf ("\nLeap year.");
	else if (year % 100 == 0)
		 printf ("\nNot Leap year.");
	else if (year % 4 == 0)
		 printf ("\nLeap year.");
	
	else
		 printf ("\nNot Leap year.");

	return 0;
}
