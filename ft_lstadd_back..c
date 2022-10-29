#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*9alwa;

	if (*lst)
	{
		9alwa = ft_lstlast(*lst);
		9alwa->next = new;
	}
	else
		*lst = new;
}
