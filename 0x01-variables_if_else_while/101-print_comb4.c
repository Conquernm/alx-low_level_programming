#include <stdio.h>

/**
 *main - Entry point
 *Description: 'Function to print combination of three numbers'
 *Return: 0 on success
 */
int main(void)
{
	int n = '0';
	int j = '0';
	int k = '0';

	while (n <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{		
				if ((n < j) && (n < k) && (j < k) && ((j != n) != k))
				{
					putchar(n);
					putchar(j);
					putchar(k);
					if (n == '7' && j == '8' && k == '9')
					{
					putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}	
			j++
		
		}
		k = '0';
		j = '0';
	       	n++
	}
			
return (0);
}
