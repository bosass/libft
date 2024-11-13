#include <aio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while(src[i] != '\0' && i + 1 < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while(src[i] != '\0')
        i++;
    return (i);
}

#include <stdio.h>
int main()
{
    char src[] = "hehe";
    char dest[30];
    size_t size = 0;
    printf("dest is '%s', src is '%s', size is '%zu'\n", dest, src, size);
    size_t out = ft_strlcpy(dest, src, size);
    printf("dest is '%s', src is '%s', size is '%zu', out is '%zu'\n", dest, src, size, out);
}
