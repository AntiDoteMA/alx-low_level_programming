/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	/* Find the end of dest */
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* Copy up to n bytes from src to dest */
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	/* Add the null terminator to dest */
	dest[dest_len + i] = '\0';

	return (dest);
}
