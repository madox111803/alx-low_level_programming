#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int harf;

	for (harf = 'z'; harf <= 'a'; harf++)
	{
	putchar(harf);
	}
	putchar('\n');
return (0);
}

