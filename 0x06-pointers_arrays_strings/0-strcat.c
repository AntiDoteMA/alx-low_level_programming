
/**
 * _strcat - concatenates two strings src and dest
 *
 * @src: source of string
 * @dest: destination of string
 *
 * Return: concatenates string
*/

char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_start);
}
