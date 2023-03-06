/**
 * reverse_array - Reverses array of ints
 * @a: The array
 * @n: The number of elements to reverse
 * Return: The reversed array
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
j = n - 1;

for (i = 0; i < n / 2; i++)
{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	j--;
}
}
