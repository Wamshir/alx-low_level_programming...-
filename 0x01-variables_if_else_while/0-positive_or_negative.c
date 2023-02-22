#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 * Description: 'Check for positive or negative number'
 * Return: always 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0 )
	{
		printf("%d is zero\n", n);
	}
        else
	{
		printf("%d is negative\n", n);
	}
        
        return (0);
=======
 * main - Entry Point
 * Description - Positive or negative
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
>>>>>>> aed66b42a28636d44ac4aa3b5fa2f950b73bc919
}
