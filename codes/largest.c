// check largest number of three

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("%d is largest",a>b?(a>c?a:c):(b>c?b:c));
    

    return 0;
}
