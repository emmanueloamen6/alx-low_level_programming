#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * @n: pointer to string
 * Return: n
 */
char *leet(char *n)
{
	int x, i;
	char s1[] = "4433007711";
	char s2[] = "aAeEoOtTiL";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (i = 0;  i < 10; i++)
		{
			if (n[x] == s2[i])
			{
				n[x] =  s1[i];
			}
		}
	}
	return (n);
}
