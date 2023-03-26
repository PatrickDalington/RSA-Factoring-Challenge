#include "main.h"

/**
 * parse_file - parse input file and factorize numbers on all lines
 *
 * @file_name: name of file with numbers to be factorized
 */

void parse_file(char *file_name)
{
	FILE *open_file;

	unsigned long int number;
	char line_val[100000];

	open_file = fopen(file_name, "r");

	if (open_file == NULL)
	{
		dprintf(STDERR_FILENO, "Error opening file <%s>\n",
			file_name);
		exit(EXIT_FAILURE);
	}

	while (!(feof(open_file)))
	{
		fgets(line_val, 100000, open_file);

		if (feof(open_file))
			break;

		number = atol(line_val);
		factorize(number);
	}

	fclose(open_file);
}
