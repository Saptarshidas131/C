/* odd loop using while loop*/

#include<stdio.h>

int main()
{
	char another = 'y';
	int num;

	while (another == 'y')
	{
		printf ("Enter a number ");
		scanf ("%d",&num);
		printf ("square of %d is %d\n",num,num*num);
		printf ("Want to enter another number y/n ");
		fflush(stdin);
		scanf ("%c",&another);
	}

	return 0;
}

