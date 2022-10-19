#include "main.h"

/**
 * print_alphabt
 *
 * Return: Always 0.
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char alp = 'a';
	char ch;

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
		ch = 'a';
	}
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar ('\n');

	_putchar('\n');
}
	

