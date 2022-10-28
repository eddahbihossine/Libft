#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *zb)
{
    (*zb).next = *lst;
    lst = &zb;
}

int main()
{
  t_list **node;
  t_list *new_node;
  
  ft_lstadd_front(node,new_node);
}
