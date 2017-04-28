#include <stdio.h>
char *mygets(char *str, int n)
{
	char *ret;

	ret = fgets(str, n, stdin);
	if (ret)
	{
		while (*str != '\n'&&*str != '\0')
			str++;
		if (*str == '\n')
			*str = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	
	return ret;
}