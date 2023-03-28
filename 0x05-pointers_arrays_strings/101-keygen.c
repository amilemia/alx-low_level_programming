#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - keygen for valid password of 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[50];
	int i, randN = 0, s = 0;

	srand(time(0));

	for (i = 0; s <= (2772 - 128); i++)
	{
		randN = (rand() % 25) + 65;

		str[i] = randN;
		s = s + randN;
	}

	str[i++] = 2772 - s;
	str[i++] = '\0';

	printf("%s\n", str);

	return (0);
}
