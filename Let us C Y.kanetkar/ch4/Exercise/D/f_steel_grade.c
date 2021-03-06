/*

	Author: AnOnYmOus001100
	Date: 27/07/2020
	Description:
			A certain type of steel is graded according to the following conditions:
			(1) Hardness must be greater than 50
			(2) Carbon cntent must be less than 0.7
			(3) Tensile strength must be greater than 5600

			Grades are as follows:
			* Grade is 10 if all three conditions are met
			* Grade is 9 if conditions (1) and (2) are met
			* Grade is 8 if conditions (2) and (3) are met
			* Grade is 7 if conditions (1) and (3) are met
			* Grade is 6 if only one condition is met
			* Grade is 5 if none of the conditions are met

			Given hardness, carbon content and tensile strength as input, determine it's grade.
*/ 

#include<stdio.h>

int main()

{

	float hardness, carbon_content, tensile_strength;

	printf ("Enter the hardness, carbon content and tensile strength: ");
	scanf ("%f %f %f",&hardness,&carbon_content,&tensile_strength);

	if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
		printf ("\nGrade 10 steel.");
	
	else if (hardness > 50 && carbon_content < 0.7)
		printf ("\nGrade 9 steel.");
	
	else if  (hardness > 50 && tensile_strength > 5600)
		printf ("\nGrade 7 steel.");

	else if  (carbon_content < 0.7 && tensile_strength >5600)
		printf ("\nGrade 8 steel.");
	
	else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)
		printf ("\nGrade 6 steel.");
	
	else
		printf ("\nGrade 5 steel.");

	return 0;
}
