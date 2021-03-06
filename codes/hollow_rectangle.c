// print a hollow rectangle of n rows
#include <stdio.h>

int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    print_rect(row);
    return 0;
}

void print_rect(int row)
{
    for(int i=1; i <= row; i++)
    {
        for(int j=1; j <= row; j++)
        {
            if(i == 1 || i == row || j == 1 || j == row)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
}
