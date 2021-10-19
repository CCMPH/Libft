#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len + 1 < dstsize)
		ft_memcpy(dst, src, len + 1);
	else if (dstsize > 0)
	{
		ft_memcpy(dst, src, dstsize);
		dst[len + 1] = '\0';
	}
	return (ft_strlen(src));
}