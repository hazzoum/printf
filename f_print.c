#include "holberton.h"
/**
 * print_char - print a character
 * @arg: input
 * Return: always 1
 *
 */
int print_char(char arg)
{
	_putchar(arg);
	return (1);
}
/**
 *print_string - print a string
 *@arg: input
 * Return: string length
 */
int print_string(char *arg)
{
	int len = 0;
	if (arg == NULL)
		arg = "(null)";
	while (arg[len] != '\0')
	{
		_putchar(arg[len]);
		len++;
	}
	return (len);
}
/**
 *print_int - print a number
 *@arg: input
 * Return: int length.
 */
int print_int(int n)
{
    int count = 0, rest = 1;
    unsigned int x;
    x = n;
    if (n < 0)
    {
        _putchar('-');
        x = -x;
        count++;
    }
    while ((x / rest) > 9)
    {
        rest = rest * 10;
    }
    while (rest > 0)
    {
        _putchar(x / rest + '0');
        x = (x % rest);
        rest = rest / 10;
        count++;
    }
    return (count);
}
/**
 *print_percent - print percent
 *@arg: input
 * Return: integer
 */
int print_percent(persent arg)
{
    (void)arg;
    _putchar('%');
    return (1);
}
