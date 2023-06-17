#include <stdio.h>

/**
 *main - function to print combination of two numbers
 *
 * Return : 0 on success
 */
int main(void)
{
	int n = '0';
	int j = '0';

	while (n <= '9')
	{
		while (j <= '9')
		{
			if (!(n > j) || n == j)
			{
				putchar(n);
				putchar(j);
				if (n == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		n++;
	}
return (0);
}
