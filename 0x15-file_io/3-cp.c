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
 * open_files - open files
 * @from: passed file_from
 * @to: passed filr_to
 * Return: filedescriptor
 */
int open_files(const char *from, const char *to)
{
	int fildesF = open(from, O_RDONLY);
	int fildesT;

	if (fildesF == -1)
	{
		char error_message[100];

		snprintf(error_message, sizeof(error_message),
			"Error: Can't read from file %s", from);
		print_error(error_message, 98);
	}

	fildesT = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

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
 * copy_data - copy data from filedescriptor to another
 * @fildesF: fildescriptor of file_from
 * @fildesT: fildescriptor of file_to
 */
void copy_data(int fildesF, int fildesT)
{
	ssize_t Bread, Bwriten;
	char bufr[1024];

	while ((Bread = read(fildesF, bufr, 1024)) > 0)
	{
		Bwriten = write(fildesT, bufr, Bread);

		if (Bwriten == -1 || Bread != Bwriten)
		{
			close(fildesF);
			close(fildesT);
			print_error("Error: Can't write to destination file", 99);
		}
	}
	if (Bread == -1)
	{
		close(fildesF);
		close(fildesT);
		print_error("Error: Can't read from source file", 98);
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
 * main - takes arguments for cp
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fildesT, fildesF;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", 97);
	}

	fildesT = open_files(argv[1], argv[2]);
	fildesF = open(argv[1], O_RDONLY);

	copy_data(fildesF, fildesT);

	close_files(fildesF, fildesT);

	return (0);
}
