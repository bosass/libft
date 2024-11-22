#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    if (n == 0)
        return (0);
    while((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && (i < n - 1))
        i++;
    return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char s1[] = "amo";
//     const char s2[] = "";
//     int n = 100;
//     int out = ft_strncmp(s1, s2, n);
//     int out2 = strncmp(s1, s2, n);
//     printf("%d || ", out );
//     printf("%d", out2);
// }