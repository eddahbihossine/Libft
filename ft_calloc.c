#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, count);
	return (rtn);
}
// int main()
// {
// 	int index =0;
// 	int *p =ft_calloc(15,22);
// 	while(index < 22)
// 	{
// 		printf("%d\n",p[index]);
// 	index++;
// 	}
// }