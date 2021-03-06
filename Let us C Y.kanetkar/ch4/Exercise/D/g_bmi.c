/*
	Author: AnOnYmOus001100
	Date: 27/07/2020
	Description:
			Calculate Body Mass Index(BMI) and report the category according to the table on the book.
			BMI = weight in kilograms / square of the height in metres
*/

#include<stdio.h>

int main()
{
	float weight, height, bmi;

	printf ("Enter the weight and height: ");
	scanf ("%f %f",&weight,&height);

	// BMI calculation
	bmi = weight / (height*height);

	// checking BMI category
	if (bmi < 15)
		printf ("\nStarvation.");

	else if (bmi >= 15.1 && bmi <=17.5)
		printf ("\nAnorexic.");

	else if (bmi >= 17.6 && bmi <= 18.5)
		printf ("\nUnderweight.");

	else if (bmi >= 18.6 && bmi <= 24.9)
		printf ("\nIdeal.");

	else if (bmi >= 25 && bmi <= 25.9)
		printf ("\nOverweight.");

	else if (bmi >= 4)
		printf ("\nMorbidly Obese."); 

	else
		printf ("\nInvalid Data.");

	return 0;
}
