#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: string to be printed
 * Return: (0)
 */
void print_rev(char *s)
{
	int pen;

	for (pen = 0; s[pen] != '\0'; pen++)
	{
	}
	for (pen = pen - 1; pen >= 0; pen--)
	{
		_putchar(s[pen]);
	}
	_putchar('\n');
}
