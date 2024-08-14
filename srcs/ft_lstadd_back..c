#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*alwa;

	if (*lst)
	{
		alwa = ft_lstlast(*lst);
		alwa->next = new;
	}
	else
		*lst = new;
}
