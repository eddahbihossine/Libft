#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *ab)
{
    (*ab).next = *lst;
    lst = &ab;
}


