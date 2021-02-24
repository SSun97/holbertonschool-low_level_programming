/**
 * _pow_recursion - get the value of x raised to the power of y
 * @x: type int
 * @y: type int
 * Return: type int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x = x * _pow_recursion(x, --y);

	return (x);
}
