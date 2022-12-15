#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lower case from a to z
 * Return: Always 0
 */
int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');
	return (0);
}
