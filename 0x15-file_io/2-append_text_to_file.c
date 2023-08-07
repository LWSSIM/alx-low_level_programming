#include "main.h" 

/**
 * append_text_to_file - appends a text to EOF
 * @filename: passed file
 * @text_content: passed text
 *
 * Return: 1 || -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, bwriten;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fildes = open(filename, O_WRONLY | O_APPEND);
	/*opened with appropriate flags*/
	if (fildes == -1)
		return (-1);

	bwriten = write(fildes, text_content, strlen(text_content));
	/*write content to file*/
	close(fildes);

	if (bwriten < 0)/*check for write error*/
		return (-1);

	return (1);
}
