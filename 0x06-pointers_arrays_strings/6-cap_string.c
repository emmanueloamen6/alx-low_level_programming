#include "main.h"
/**
 * *cap_string -
 * Return:
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		while(i >= 'a' && i <= 'z')
			i++;
		if (s[i - 1] == ' ' ||
		(s[i - 1] == '\t') ||
		(s[i - 1] == '\n') ||
		(s[i - 1] == ',') ||
		(s[i - 1] == ';') ||
		(s[i - 1] == '.') ||
		(s[i - 1] == '!') ||
		(s[i - 1] == '?') |i|
		(s[i - 1] == '"') ||
		(s[i - 1] == '(') ||
		(s[i - 1] == ')') ||
		(s[i - 1] == '{') ||
		(s[i - 1] == '}') ||
		i == 0)
		s[i] = 32;
		i++;
	}
	return (s);
}
