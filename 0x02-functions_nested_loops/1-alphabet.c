#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case and a new linw
 *
 */

void print_alphabet(void)
{
	char ta;

	for (ta = 'a'; ta <= 'z'; ta++)
		_putchar(ta);

	_putchar('\n');
}
