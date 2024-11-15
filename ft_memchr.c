#include "libft.h"
// #include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *ss;

    i = 0;
    ss = (char *)s;
    while(i < n)
    {
        if((unsigned char)ss[i] == (unsigned char)c)
            return (char *)&s[i];
        i++;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char s[] = "abcdef";
//     int c  = 'e';
//     size_t n = 6;
//     char *out = ft_memchr(s, c, n);
//     printf("%s", out);
// }