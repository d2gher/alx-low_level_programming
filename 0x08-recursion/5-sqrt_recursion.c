int _real_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - get square root
 * @n: base
 *
 * Return: x raised to the power of y
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (_real_sqrt_recursion(n, 0));
}

/**
 * _real_sqrt_recursion - iterate through 
 * numbers to get square root
 * @n: number
 * @i: square root
 *
 * Return: square root
 */
int _real_sqrt_recursion(int n, int i)
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
return (real_sqrt_recursion(n, i + 1));		
}
