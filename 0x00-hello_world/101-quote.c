#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *ssize_t write(int fd.const void *buf.size_t count)
 *
 * Return: 1 not success
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
