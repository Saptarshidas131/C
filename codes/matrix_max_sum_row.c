// find the row of a matrix with the maximum sum
#include <stdio.h>

int main()
{
    input();

    return 0;
}

void input()
{
    int rows, cols, a[10][10];
    
    printf("Enter the rows and columns: ");
    scanf("%d %d",&rows, &cols);
    
    printf("Enter matrix elements: ");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    

    printf("Matrix is: \n");
    output(a,rows,cols);
    sum(a,rows,cols);
    
}

void output(int arr[10][10],int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",arr[i][j]);
        }
            printf("\n");
    }
}

void sum(int a[10][10], int rows, int cols)
{
    int sum[10], max_index = 1, max_sum = 0;
    
    for(int i=0; i<rows; i++)
    {
            sum[i] = 0;
        for(int j=0; j<cols; j++)
        {
            sum[i] = sum[i] + a[i][j];
            
            if(sum[i] > max_sum)
            {
                max_index = i+1;
                max_sum = sum[i];
            }
        }
        printf("Sum of row %d is %d \n",i+1,sum[i]);
    }

    printf("\nRow %d has a max sum of %d \n",max_index,max_sum);
}
