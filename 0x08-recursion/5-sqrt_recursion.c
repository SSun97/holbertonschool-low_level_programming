/**
 * _sqrt_recursion - get the squar root of n;
 * @n: type int
 * Return: n
 */
int sqrts(int n, int s);

int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	return (sqrts(n, 0));

}
/**
 * sqrts- check
 * @n: type int
 * @s: type int
 * Return: type int
*/

int sqrts(int n, int s)
{
	int sqr = s * s;
	if (sqr == n)
		return (s);
	if (sqr > n)
		return (-1);
	if (sqr < n)
		return (sqrts(n, s + 1));
	return (0);

}
