#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char i = 'a';

	while (i != 'q' && i != 'e')
	{
		continue;
		putchar(i);
		i++;
	}
	return (0);

}
