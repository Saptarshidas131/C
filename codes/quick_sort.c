/* C implementation QuickSort */
#include<stdio.h>
#include<stdlib.h>

// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
	array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quick_sort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = partition(arr, low, high); 

		// Separately sort elements before 
		// partition and after partition 
		quick_sort(arr, low, pi - 1); 
		quick_sort(arr, pi + 1, high); 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i <= size+1; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

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

        quick_sort(A, 0,n-1);
        printArray(A,sizeof(A)/sizeof(A[0]));
        // freeing up the allocated memory
        free(A);
    }
    
    return 0;
}
