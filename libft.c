
#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	boite;
	int	num;

	i = 0;
	boite = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		boite = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * boite);
}

