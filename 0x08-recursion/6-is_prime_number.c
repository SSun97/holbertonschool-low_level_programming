/**
 * pr - check if n is prime
 * @n: type int
 * @a: type int
 * Return: 1 if it is prime, otherwise 0
 */

int pr(int n, int a)
{
	if (a < n)
	{
		if ((n % a) == 0)
			return (0);
		else
			return (pr(n, a + 1));
}
	else
		return (1);

}


/**
 * is_prime_number - check if n is prime
 * @n: type int
 * Return: pr
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pr(n, 2));
}
