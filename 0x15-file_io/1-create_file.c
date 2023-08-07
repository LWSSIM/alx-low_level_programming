#include "main.h"

/**
 * create_file - creates a file with 600(rights)
 * @filename - name of the new file
 * @text_content: string to write to new file
 *
 * Return: 1||-1
 */
int create_file(const char *filename, char *text_content)
{
	int fildes;
	int WriteByte;

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/*opens file with appropraite flags*/
	if (fildes == -1)
		return (-1);

	if (!text_content)
	{
		close(fildes);
		return (1);
	}
	/*write text_content to file*/
	WriteByte = write(fildes, text_content, strlen(text_content));

	close(fildes);
	if (WriteByte < 0)
		return (-1);
	
	return (1);
}
