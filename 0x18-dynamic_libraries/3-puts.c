#include "main.h"
/**
 * _puts - prints a str, followed by a new line, to stdout
 * @str: str to be print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
