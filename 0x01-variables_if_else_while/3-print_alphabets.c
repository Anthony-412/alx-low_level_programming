#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in both lower and upper case,
 * Return: Always 0
 */
int main(void)
{
	char mn;
	char nm;

	for (mn = 'A'; mn <= 'Z'; mn++)
	{
		putchar(mn);
	}
	for (nm = 'a'; nm <= 'z'; nm++)
	{
		putchar(nm);
	}
	putchar('\n');
		return (0);
}
