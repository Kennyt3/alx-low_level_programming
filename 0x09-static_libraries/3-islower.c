#include "main.h"

/**
 * _islower - Check Holberton
 * @c: An input character
 * Description: function uses _putchar funtion to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is lowercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
