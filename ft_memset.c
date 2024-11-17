// #include <unistd.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ss;

    i = 0;
    ss = (unsigned char * )s;
    while(i < n)
    {
        ss[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char big[] = "hehe lol xdd";
//     int c = 'a';
//     size_t size = 4;
//     ft_memset(big, c, size);
//     printf("%s", big);
// }