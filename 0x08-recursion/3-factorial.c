/**
 * factorial - get the factorial of a integer
 * @n:type int
 * Return: type int, the result.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));


}
