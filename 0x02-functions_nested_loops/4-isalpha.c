#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/** 
 *
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an alphabetic letter (either uppercase or lowercase),
 *         0 otherwise.
 */
