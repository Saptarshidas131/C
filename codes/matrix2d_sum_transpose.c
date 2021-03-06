// sum of two 2d matrix and it's transpose
#include <stdio.h>

int main()
{
    input();

    return 0;
}

void input()
{
    int rows, cols, a[10][10],b[10][10], n;
    
    printf("Enter the rows and columns: ");
    scanf("%d",&n);

    rows = cols = n;
    
    printf("Enter first matrix: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter second matrix: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("First matrix: \n");
    output(a,n);
    printf("Second matrix: \n");
    output(b,n);

    sum(a,b,n);
    
}


void output(int arr[10][10],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
            printf("\n");
    }
}

void sum(int a[10][10],int b[10][10], int n)
{
    int c[10][10];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices: \n");
    output(c,n);
    transpose(c,n);
}

void transpose(int arr[10][10], int n)
{
    int d[10][10];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            d[i][j] = arr[j][i];
        }
    }

    printf("Transpose of matrices: \n");
    output(d,n);
}
