#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	while(i >= 0)
	{
		if(s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);	
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     int c = 'a';
//     const char s[] = "255a35as";
//     char *out = ft_strrchr(s, c);
//     printf("out - '%s', s - '%s'", out, s);
// }