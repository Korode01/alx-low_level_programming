#include<stdio.h>

/**
 * main - Printthe alphabetic
 * a program that prints the alphabelt in lower case, followed by a new line.
 * Return: Always (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
