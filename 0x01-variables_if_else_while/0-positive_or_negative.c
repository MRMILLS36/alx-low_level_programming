#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - assigns a random number to the variable n each time
 *   * it is executed. Complete the source code in order to print whether
 *    * the number stored in the variable n is positive or negative.
 *     *
 *      * Return: Always 0 (Success)
 *       */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n); /* print the number */
	if (n > 0) /* check if the number is positive */
	{
		printf("is positive\n"); /* print "is positive" followed by a new line */
	}
	else if (n == 0) /* check if the number is zero */
	{
		printf("is zero\n"); /* print "is zero" followed by a new line */
	}
	else /* otherwise, the number is negative */
	{
		printf("is negative\n"); /* print "is negative" followed by a new line */
	}
	return (0);

