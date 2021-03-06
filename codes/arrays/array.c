#include <stdio.h>

int main()
{
    int arr[] = {1,4,5,10,2};

    // finding the size of array by dividing array size in bytes by size of integer
    int arr_size = sizeof(arr)/sizeof(int);

    //printf("%d",arr_size);
    for (int i=0;i<arr_size; i++)
        printf(" %d",arr[i]);

    return 0;
}
