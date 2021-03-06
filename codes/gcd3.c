// gcd of three numbers or more

#include <stdio.h>

int main()
{
    int x,y,z,i = 1,gcd;

    printf("Enter the first, second and third number: ");
    scanf("%d %d %d",&x, &y, &z);

    
    while(i <= x)
    {
        if((x%i == 0) && (y%i == 0) && (z%i == 0))
        {
            gcd = i;
        }
        i++;
    }

    printf("\nThe gcd is %d",gcd);

    return 0;
}
