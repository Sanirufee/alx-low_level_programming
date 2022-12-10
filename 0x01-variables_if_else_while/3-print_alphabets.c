#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase and uppercase on same line
 * using putchar only thrice, followed by new line
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
