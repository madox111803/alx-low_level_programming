#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	char harf;

	for (harf = 'a'; harf <= 'z'; harf++)
	{
		putchar(harf);
	}
	for (harf = 'A'; harf <= 'Z'; harf++)
	{
		putchar(harf);
	}
	putchar('\n');
return (0);
}

