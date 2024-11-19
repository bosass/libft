#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	len;
	void	*out;

	len = nmemb * size;
	out = malloc(len);
	if (!out)
		return (NULL);
	ft_bzero(out, len);
	return (out);
}