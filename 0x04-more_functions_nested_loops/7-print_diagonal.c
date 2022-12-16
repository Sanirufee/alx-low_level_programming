#include "main.h"
/**
 *  print_line - Draws a straight line using the character _.
 *  @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;
			_putchar('\n');

		}
	}
	_putchar('\n');
}
