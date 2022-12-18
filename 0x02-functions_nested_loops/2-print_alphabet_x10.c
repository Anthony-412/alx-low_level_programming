#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)

{
	int ten;
	char ta;

	for (ten = 0; ten <= 9; ten++)
	{
			for (ta = 'a'; ta <= 'z'; ta++)
				_putchar(ta);

			_putchar('\n');
	}
}
