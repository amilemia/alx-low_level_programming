#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int coins;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = count_coins(cents);

	printf("%d\n", coins);
	
	return (0);
}

/**
 * count_coins - Count the minimum number of coin to make
 * change for a given coin value
 * 
 * @cents: The amount of money to make change for
 * 
 * Return: The minimum number of coins needed
*/

int count_coins(int cents)
{
	int coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	return (coins);
}