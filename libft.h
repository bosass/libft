#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <aio.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strlen(const char *s);
char *ft_strrchr(const char *s, int c);
int ft_toupper(int c);
int ft_toupper(int c);

#endif