#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*del_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del_next = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(del_next, del);
	}
}
