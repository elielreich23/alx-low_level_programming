#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 *
 * returs zero id succeful
*/

int main(void)
{
	int n;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	/*your code goes here */
	if (b > 0)
		printf("%d is positive\n", b);
	else if (n ==0)
		printf("%d is zero\n", b);
	else 
		printf("%d is negative\n", b);
	return (0);
}
