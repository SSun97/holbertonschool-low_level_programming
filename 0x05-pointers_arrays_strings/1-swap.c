/**
 * swap_int - swap two int var
 * @a: pointer
 * @b: pointer
*/
void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}


