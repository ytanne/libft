#include "libft.h"

int		main(void)
{
	char	*str;

	str = (char *)ft_memalloc(9);
	str[0] = 'h';
	str[1] = 'i';
	str[2] = '\n';
	str[3] = '\0';
	ft_printf("%s", str);
	return (0);
}
