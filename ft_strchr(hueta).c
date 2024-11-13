// const char *ft_strchr(const char *s, int c)
// {
//     int i;
//     int k;
    

//     i = 0;
//     k = 0;
//     while(s[i] != '\0')
//         i++;
//     const char *out[i + 1];
//     i = 0;
//     while(s[i] != '\0')
//     {
//         if(s[i] == c)
//         {
//             while(s[i] != '\0')
//             {
//                 out[k] = &s[i];
//                 k++;
//                 i++;
//             }
//             // out[k] = '\0';
//             return *(out);
//         }
//         i++;
//     }
//     return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}





#include <string.h>
#include <stdio.h>
int main()
{
    int c = '\0';
    const char s[] = "255a35as";
    const char *out = ft_strchr(s, c);
    printf("out - '%s', s - '%s'", out, s);
}