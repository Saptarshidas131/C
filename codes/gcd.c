// gcd of two numbers

#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter the first and second number: ");
    scanf("%d %d",&x, &y);

    // euclid's alogrithm of successive subtraction
    while(x != y)
    {
        if(x >y)
            x = x - y;
        else
            y = y - x;
    }

    printf("\nThe gcd is %d",x);

    return 0;
}
