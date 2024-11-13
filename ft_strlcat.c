#include <aio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t k;
    size_t out;

    i = 0;
    k = 0;
    out = 0;
    while(dst[i] != '\0')
        i++;
    while(src[k] != '\0' && i + k + 1 < size)
    {
        dst[i + k] = src[k];
        k++;
    }
    dst[i + k] = '\0';
    k = 0;
    while(src[k] != '\0')
        k++;
    out = i + k;
    return (out);
}

#include<stdio.h>
int main()
{
    char dst[] = "hehe";
    char src[] = "haha";
    size_t size = 5;
    size_t out = ft_strlcat(dst, src, size);
    printf("dest is '%s', src is '%s', size is '%zu', out is '%zu'\n", dst, src, size, out);
}