#include "main.h"

/**
 * read_textfile - Reads a text file & print it to stdout(POSIX)
 * @filename: passed file
 * @letters: number of file letters to operate on
 *
 * Return: number of letters printed || 0(edgecases)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *bufr;
	ssize_t read_byte, write_byte;

	if (filename == NULL)
		return (0);

	/*open file in O_RDONLY*/
	file = fopen(filename, "r");
	if  (file == NULL)
		return (0);

	bufr = (char *)malloc(letters);
	if (bufr == NULL)
	{
		fclose(file);
		return (0);
	}
	/*read n bytes from file*/
	read_byte = fread(bufr, sizeof(char), letters, file);

	if (read_byte <= 0)
	{
		free(bufr);
		fclose(file);
		return (0);
	}
	/*write to stdout*/
	write_byte = write(STDOUT_FILENO, bufr, read_byte);

	free(bufr);
	fclose(file);

	if (write_byte != read_byte)
		return (0);

	return (write_byte);
}
