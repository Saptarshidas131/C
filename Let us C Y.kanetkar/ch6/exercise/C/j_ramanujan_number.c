/*
	Author: AnOnYmOus001100
	Date: 08/08/2020
	Description: Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways.
	Find all such numbers upto a resonable limit.
*/

#include<stdio.h>

int main()
{

	int i, n1, n2, x, y, r;

	printf("Input a range n1 n2 between which to find Ramanujan No.: ");
	scanf("%d %d", &n1, &n2);

	// only 1729 is the ramunajan number among all such numbers as it is the smallest number  which passes the condition
	printf ("\nList of all such numbers are: \n");

	for(i = n1; i < n2; i++){
	    	r = 0;
    		for(x = 1;x*x*x < i;x++){
        		for(y = x+1; x*x*x + y*y*y <= i; y++){

            			if(x*x*x + y*y*y == i){
                 			r++;
                 			x++;           
 					              }
       							     }

   					 }
     if(r == 2){
            printf("%d ", i);
        }
				}
return 0;
}
