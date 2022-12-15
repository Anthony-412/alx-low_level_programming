#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all alphabets in lower case except q and e
 * Return: Always 0
 */
int main(void)

{
	char ra;

	for (ra = 'a'; ra <= 'z'; ra++)

	{
	if (ra != 'e' && ra != 'q')


	putchar (ra);
	}

	putchar('\n');
	return (0);
}
