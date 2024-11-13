#include <libft.h>

int ft_toupper(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        char out = c + 32;
        return (out);
    }
    return (c);
}