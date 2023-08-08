#include "main.h"

/**
 * print_error - print error using dprintf
 * @message: error message
 * @exit_code: int to pass to exit
 */
void print_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
 * open_source_file - open file_from as RDONLY
 * @from: passed file
 * Return: filedescriptor
 */
int open_source_file(const char *from)
{
	int fildesF = open(from, O_RDONLY);

	if (fildesF == -1)
	{
		char error_message[100];

		snprintf(error_message, sizeof(error_message),
			"Error: Can't read from file %s", from);
		print_error(error_message, 98);
	}
	return (fildesF);
}
/**
 * open_destination_file - open file_to
 * @to: passed file
 * Return: filedescriptor
 *
 */
int open_destination_file(const char *to)
{
	int fildesT = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fildesT == -1)
	{
		char error_message[100];

		snprintf(error_message, sizeof(error_message),
				"Error: Can't write to %s", to);
		print_error(error_message, 99);
	}
	return (fildesT);
}
/**
 * read_from_source - reads source file
 * @fildesF: file descriptor
 * @bufr: char buffer
 * Return: content
 */
ssize_t read_from_source(int fildesF, char *bufr)
{
	ssize_t Bread = read(fildesF, bufr, 1024);

	if (Bread == -1)
	{
		close(fildesF);
		print_error("Error: Can't read from source file", 98);
	}
	return (Bread);
}
/**
 * write_to_destination - write content to file_to
 * @fildesT: fildescriptor of file_to
 * @bufr: char buffer
 * @Bread: read content to write
 */
void write_to_destination(int fildesT, char *bufr, ssize_t Bread)
{
	ssize_t Bwriten = write(fildesT, bufr, Bread);

	if (Bwriten == -1 || Bread != Bwriten)
	{
		close(fildesT);
		print_error("Error: Can't write to destination file", 99);
	}
}
/**
 * close_files - file closing checker
 * @fildesF: file descriptor file_from
 * @fildesT: file descriptor file_to
 */
void close_files(int fildesF, int fildesT)
{
	if (close(fildesF) == -1)
	{
		print_error("Error: Can't close source file descriptor", 100);
	}
	if (close(fildesT) == -1)
	{
		print_error("Error: Can't close destination file descriptor", 100);
	}
}
/**
 * cp - copies source file to dest file
 * @from: content file_from
 * @to: content file_to
 * Return: 0
 */
int cp(const char *from, const char *to)
{
	int fildesF = open_source_file(from);
	int fildesT = open_destination_file(to);
	char bufr[1024];
	ssize_t Bread;

	while ((Bread = read_from_source(fildesF, bufr)) > 0)
	{
		write_to_destination(fildesT, bufr, Bread);
	}

	close_files(fildesF, fildesT);
	return (0);
}
/**
 * main - takes arguments for cp
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", 97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
