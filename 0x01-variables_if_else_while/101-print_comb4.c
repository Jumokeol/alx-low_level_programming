#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)

{
	int n, m, l;

	for (n = '7'; n <= '7'; n++)
	{
		for (m = '8'; m <= '8'; m++)
		{
			for (l = '9'; l <= '9'; l++)
			{
				if (l <  m && m < n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (!(n == '7' && m == '8' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
