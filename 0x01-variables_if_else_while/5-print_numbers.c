#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numbers with base 10
 * Return: Always 0
 */
int main(void)

{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	putchar ('\n');
	return (0);
}

