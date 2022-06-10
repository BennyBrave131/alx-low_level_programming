#include <stdio.h>

/**
 * main - prints the numbers from 1 - 100
 * prints fizz instead of 5,
 * prints buzz for multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{

