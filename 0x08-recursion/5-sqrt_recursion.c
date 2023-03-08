/**
 * _pow_recursion - raise x to the power of y
 * @x: base
 * @y: raise to power
 *
 * Return: x raised to the power of y
 */
int _sqrt_recursion(int n)
{
if (n == 1)
	return (1);
if (n == 4)
	return (2);
return (1 + _sqrt_recursion(n - 1));
}
