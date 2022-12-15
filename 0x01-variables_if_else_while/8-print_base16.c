#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all numbers of base 16
 * Return: Always 0
 */
int main(void)

{
	int num;
	char ta;

	for (num = '0'; num <= '9'; num++)
		putchar ((num % 9) + '0');
	for (ta = 'a'; ta <= 'f'; ta++)
		putchar (ta);

	putchar ('\n');
	return (0);
}

