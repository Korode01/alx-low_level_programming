#include<unistd.h>
/**
 *  * main - print the standrad error sandwiched around the standard output/t
 *   *
 *    * Return: returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
