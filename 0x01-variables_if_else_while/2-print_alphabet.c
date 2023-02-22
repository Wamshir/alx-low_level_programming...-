#include <stdio.h>
/**
 * Main - Entry Point
 * Description - 'Print Lower case'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
