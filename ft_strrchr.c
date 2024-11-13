#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
	while(*s)
		s++;
	while(*s)
	{
		if(*s == c)
			return ((char*)s);
		s--;
	}
	return (0);	
}

#include <string.h>
#include <stdio.h>
int main()
{
    int c = 'a';
    const char s[] = "255a35as";
    char *out = ft_strrchr(s, c);
    printf("out - '%s', s - '%s'", out, s);
}