#include <stdio.h>
/**
*main - Prints all single digits with , and space followed by new line
*
*Return: returns 0
*/
int main(void) 
{
	int i;
    
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
	{
			putchar(',');
			putchar(' ');
	}
	}
	putchar('\n');
	return 0;
}
