
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	unsigned char	*cast1;
	unsigned char	*cast2;

	i = 0;
	cast1 = (unsigned char *)s1;
	cast2 = (unsigned char *)s2;
	while ((cast1[i] != '\0') && (cast2[i] != '\0'))
	{
		if (cast1[i] != cast2[i])
			return (cast1[i] - cast2[i]);
		i++;
	}
	return (cast1[i] - cast2[i]);
}
