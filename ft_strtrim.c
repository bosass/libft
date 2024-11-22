#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int k;
    int j;
    char *out;

    j = 0;
    i = 0;
    k = 0;
    while(s1[i] != '\0')
        i++;
    
    while(s1[k] == set)
        k++;
    while(s1[i] == set)
    {
        i--;
        j++;
    }

    
    
}