/* 
	Author: AnOnYmOus001100
	Date: 08/08/2020
	Description: Population of a town is 10000. The population has increased at the rate of 10% per year
	Find the population of the the end of each year in last decade.
*/

#include<stdio.h>

int main()
{
	int population_of_town = 10000,  increase_in_population = 0;

	// calculating population for last 10 years
	for (int year = 10; year >= 1; year--)
	{
		// calculating increase in population
		increase_in_population = population_of_town * 0.1;
		// calculating population per year
		population_of_town = population_of_town - increase_in_population;
		printf ("\nPopulation in %d year is %d",year,population_of_town);
	}
return 0;
}
