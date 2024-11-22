#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int k;
    char *out;

    i = 0;
    k = 0;
    while(s[i] != '\0')
    {
        if(s[i] == start)
        {
            while(s[i] != '\0' && k < len)
                k++;
            out = malloc(sizeof(char) * k + 1);
            if(out == NULL)
                return(NULL);
            k = 0;
            while(s[i] != '\0' && k < len)
            {
                out[k] = s[i];
                k++;
                i++;
            }
            out[k] = '\0';
        }
        i++;
    }
    return (out);
}

// #include <stdio.h>
// int main()
// {
//     char const *s = "xddlol";
//     unsigned int start = 'l';
//     char *out = ft_substr(s, start, 10);
//     printf("%s", out);
// }