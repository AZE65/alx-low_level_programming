
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
/**
 * The printf() function is the basic function used to print the sentence in the C programming language, and the name is an abbreviation of the term formatted printing, as the printf() function emphasizes controlling the way the text sentence or what is independent of the text sentence is printed, and the possibility of printing values ​​in the sense of printing them.
 * */
