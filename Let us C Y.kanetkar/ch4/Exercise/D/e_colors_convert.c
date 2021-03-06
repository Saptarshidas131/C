/*
        Author: AnOnyMoOus001100
        Date: 26/07/2020
	Description: To convert from Red-Green-Blue(RGB) color format to Cyan-Magenta-Yellow-Black(CMYK) color format.
*/

#include<stdio.h>

int main()
{

  int  red, green, blue;
  float cyan, magenta, yellow, black;
  float rd, gd, bd,white;

  printf ("Enter the rgb values(0-255): ");
  scanf ("%d %d %d",&red,&blue,&green);

  
  // conversion
  rd = red/255;
  gd = green/255;
  bd = blue/255;

  printf ("\nrd: %d, gd: %d, bd: %d",rd,gd,bd);

  white = (rd > gd ? rd : gd);
  white = (gd > white ? gd : white);
  white = (bd > white ? bd : white);

  printf ("\nwhite: %d",white);

  cyan = (white - rd)/white;
  magenta = (white - gd)/white;
  yellow = (white - bd)/white;
  black = 1 - white;

  printf ("\nThe equivalent cmky value is %d %d %d %d",cyan,magenta,black,yellow);

  return 0;
}  
