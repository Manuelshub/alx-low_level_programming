#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int apple = 0;
	int src_len = 0;

	while (src[apple++])
		src_len++;

	for (apple = 0; src[apple] && apple < n; apple++)
		dest[apple] = src[apple];

	for (apple = src_len; apple < n; apple++)
		dest[apple] = '\0';

	return (dest);
}
