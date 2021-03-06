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

// function to implement selection sort, find the minimum element and swap with the element found at the location of minimum
void selection_sort(int A[], int n)
{
    int minimum;
    
    for(int i=0; i<n-1; i++)
    {
        minimum = i;
        
        for(int j=i+1; j<n; j++)
        {
            if(A[j] < A[minimum])
            {
                minimum = j;
            }
        }
        // swap with the minimum element
        swap(&A[minimum], &A[i]);
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

        selection_sort(A, n);
        // freeing up the allocated memory
        free(A);
    }
    
    return 0;
}
