#include "main.h"
#include <stdio.h>
/**
 * main - prints arguments
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	_printf("%s\n", argv[0]);
	return (0);
}

