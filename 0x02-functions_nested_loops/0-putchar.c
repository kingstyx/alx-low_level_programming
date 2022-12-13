#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: prints Holberton
 *
 * Return: 0 (Success)
 */
int main(void)
{
char text[8] = "_putchar";
for (int i = 0; i < 8; ++i)
{
_putchar(text[i]);
}
return (0);
}
