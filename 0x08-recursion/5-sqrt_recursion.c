#include "main.h"

int actual_sqrt_recursion(int n, int num);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: int
 * @num: iterator
 *
 * Return: int
 */
int actual_sqrt_recursion(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);
	return (actual_sqrt_recursion(n, num + 1));
}
