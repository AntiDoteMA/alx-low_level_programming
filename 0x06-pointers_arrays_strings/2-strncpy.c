/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char* _strncpy(char* dest, char* src, int n)
{
	int i;
	
	/* Copy up to n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* If src has fewer than n bytes
		pad dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

