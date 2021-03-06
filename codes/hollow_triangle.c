// print a hollow triangle of n rows
#include <stdio.h>

int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    print_triangle(row);
    return 0;
}

void print_triangle(int row)
{
    for(int i=1; i <= row; i++)
    {
        for(int j=1; j <= i; j++)
        {
            if(j == 1 || i == j || i == row)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
}
