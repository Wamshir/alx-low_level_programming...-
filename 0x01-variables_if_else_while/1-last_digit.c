<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get last digit number'
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - main code
 * Description - prints remainder
>>>>>>> aed66b42a28636d44ac4aa3b5fa2f950b73bc919
 * Return: Always 0
 */
int main(void)
{
	int n;
<<<<<<< HEAD
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, ld);
=======
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
>>>>>>> aed66b42a28636d44ac4aa3b5fa2f950b73bc919
	}
	return (0);
}
