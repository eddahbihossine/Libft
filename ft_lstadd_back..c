#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*javis;

	if (*lst)
	{
		javis = ft_lstlast(*lst);
		javis->next = new;
	}
	else
		*lst = new;
}
