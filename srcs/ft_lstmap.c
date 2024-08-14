#include	"libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			if (result)
				ft_lstclear(&result, del);
			return (NULL);
		}
		if (!result)
			result = new_node;
		else
			ft_lstadd_back(&result, new_node);
		lst = lst->next;
	}
	return (result);
}
