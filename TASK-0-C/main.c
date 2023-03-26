#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success; 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: factors <file>\n");
		return (1);
	}

	parse_file(argv[1]);
	return (0);
}
