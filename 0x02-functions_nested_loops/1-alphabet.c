#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char harf = 'a';

	while (harf <= 'z')
	{
		_putchar(harf);
		harf++;
	}
	_putchar('\n');
}
