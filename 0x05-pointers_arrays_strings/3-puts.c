#include "main.h"

/**
 * _puts - prints a string to stdout
 * @STR: pointer input
 * Return : Nothing
 */
void _puts(char *STR)
{
	int NUM;

	for (NUM = 0; STR[NUM] != '\0'; NUM++)
	{
		_putchar(STR[NUM]);
	}
	_putchar('\n');
}
