#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n;
	int l;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there */
	/* scan your last digit of n*/
	l = n % 10;
	if (l >5)
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	else 
		printf("Last digit of %d is %d and is 0/n", n, 1);
	return (0);
}
