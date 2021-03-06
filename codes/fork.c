#include <unistd.h>
#include <stdio.h>

// calls fork, creates a child process and copies the data
// prints Hi Hi
main()
{
	fork();
	// n forks creates 2^n processes
	//fork();
	//fork();
	printf("Hi\n");
}
