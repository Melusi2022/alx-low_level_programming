#include <unistd.h>
/**
 * main - Prints _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char message[] = "_putchar\n";

	write(1, message, sizeof(message) - 1);

	return (0);
}
