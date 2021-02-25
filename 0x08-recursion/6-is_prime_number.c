/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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




int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);




      }
