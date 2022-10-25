#include "libft.h"
int	ft_atoi(char *str)
{
	int	i;
	int	sign ;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (sign * result);
}
int main()
{
	char h[] ="2147483689";
	printf("%d\n",ft_atoi(h));
	printf("%d",atoi(h));
}
