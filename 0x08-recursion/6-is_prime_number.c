#include "main.h"

int actual_prime(int n, int num);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @num: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int num)
{
	if (num == 1)
		return (1);
	if (n % num == 0 && num > 0)
		return (0);
	return (actual_prime(n, num - 1));
}
