#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints a text accordingto number
 * Return: Always (Success)
 *
 */

int main(void)

{

	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
