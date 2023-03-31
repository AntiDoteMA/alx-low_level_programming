/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0

	/* Copy up to n bytes from src to dest */
	while (i < n && src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	/* If src is shorter than n, pad dest with null bytes */
	while (i < n) {
		dest[i] = '\0';
		i++;
	}

	return dest;
}

