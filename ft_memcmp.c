// #include <unistd.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *ss1;
    char *ss2;
    // int out;

    i = 0;
    ss1 = (char*)s1;
    ss2 = (char*)s2;
    while(i < n)
    {
        if((unsigned char)ss1[i] == (unsigned char)ss2[i])
            i++;
        else
            return((unsigned char)ss1[i] - (unsigned char)ss2[i]);
    }
    return(0);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char s1[] = "123";
//     const char s2[] = "123";
//     int n = 4;
//     int out = ft_memcmp(s1, s2, n);
//     int out2 = memcmp(s1, s2, n);
//     printf("%d || ", out );
//     printf("%d", out2);
// }