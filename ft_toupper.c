int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        char out = c - 32;
        return (out);
    }
    return (c);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    int a = 'S';
    int b = ft_toupper(a);
    printf("%c, %c", a, b);
}