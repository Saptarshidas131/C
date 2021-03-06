#include <stdio.h>
#include <stdlib.h>

// swap function to swap two integers
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// function to implement bubble sort, check if the ith element is greater than the next element then swap
void bubble_sort(int A[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(A[i] > A[i+1])
            {
                // swap if ith element greater than (i+1)th element
                swap(&A[i], &A[i+1]);
            }
        }
    }

    printf("After swapping: \n");
    for(int i=0; i<n; i++)
        printf(" %d",A[i]);
}

// main function for input and function call
int main()
{
    int n, *A;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    // dynamically allocating memory
    A = (int*)malloc(n* sizeof(int));

    if(A == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&A[i]);
        }

        bubble_sort(A, n);
        // freeing up the allocated memory
        free(A);
    }
    
    return 0;
}
