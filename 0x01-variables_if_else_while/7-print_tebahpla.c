#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char li;

	for (li = 'z'; li >= 'a'; li--)
		putchar(li);

	putchar('\n');

	return (0);
}

