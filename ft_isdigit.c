int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return (1);
    return (0);
}
#include<stdio.h>
int main()
{
    char c = '5';
    int out = ft_isdigit(c);
    printf("%d", out);
}