/**
* reverse_array - reverse the print of a string
* @a: an array of integers
* @n: the number of elements to swap
*
* Return: nothing.
*/
void reverse_array(int *a, int n)
{
	int *p;
	int *q;

	p = a;
	q = a + n - 1;

	while (p < q)
	{
		*p = *p ^ *q;
		*q = *p ^ *q;
		*p = *p++ ^ *q--;
	}

}
