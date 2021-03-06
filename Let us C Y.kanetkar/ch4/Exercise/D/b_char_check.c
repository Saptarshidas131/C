/*
	Author: AnOnYmOus001100
	Date: 25/07/2020 

 	Description: Determine whether the character entered through the entered through the keyboard is a lower case letter, capital letter, a digit or a special symbol or not.
*/

#include <stdio.h>

int main()
{
	char ch;
	int char_to_int;

	printf ("Enter a character: ");
	scanf ("%c",&ch);

	char_to_int = ch;	// typecasting char to int

     if (char_to_int >= 65 && char_to_int <= 90)
	printf ("\nCapital letter.");
	
     else if (char_to_int >= 97 && char_to_int <= 122) 
	 printf  ("\nLower case letter.");
	
     else if(char_to_int >=48 && char_to_int <= 57)
	printf ("\nDigit.");

     else if ((char_to_int >= 0 && char_to_int <= 47) || (char_to_int >= 58 && char_to_int <= 64) || (char_to_int >= 91 && char_to_int <= 96) || (char_to_int >= 123 && char_to_int <= 127))
	 printf ("\nSpecial Symbol.");

     else 
 	printf ("\nNeither a Upper case, Capital letter, digit or Special Case.");

	return 0;
}
