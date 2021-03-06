/* 
	Author: AnOnYmOus001100
	Date: 02/10/2020

	Descripton: This program calculates the perimeter and area of a rectangle or square and outputs the result.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// variable initialization
    double height = 50.0, width = 24.5, area = 0.0, perimeter = 0.0;

	// calculating perimeter
    perimeter = 2 * (height + width);
	// calculating area
    area = height * width;

	// output
    printf("\nThe height is %f width is %f and perimeter is %f of the rectangle.",height,width,perimeter);
    printf("\nThe height is %f width is %f and area is %f of the rectangle.",height,width,area);

    return 0;
}
