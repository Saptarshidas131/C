#include<stdio.h>

int main()
{
        int arr[] = {1,3,12,9};

        for(int i=0; i<4;i++)
            printf(" %d",*(arr+i));

            return 0;
}
