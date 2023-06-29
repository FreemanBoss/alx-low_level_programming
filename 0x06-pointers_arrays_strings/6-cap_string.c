#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the sring
 * Return: first letter should be capitalized
 */

char *cap_string(char *str)
{
	int i = 0;
	int is_first = 1;

	while (str[i])
	{
		if (is_first && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			is_first = 0;
		}
		else
		{
			is_first = (str[i] == ' ' || str[i] == '\t' || str[i]
				    == '\n' || str[i] == ',' || str[i] == ';'
				    || str[i] == '.' || str[i] == '!' ||
				    str[i] == '?' || str[i] == '?' || str[i]
				    == '"' || str[i] == '(' || str[i] == ')'
				    || str[i] == '{' || str[i] == '}');
		}
		i++;
	}
	return (str);
}
