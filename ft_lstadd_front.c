#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *zb)
{
    (*zb).next = *lst;
    lst = &zb;
}

int main()
{
  t_list **qalwa = malloc(sizeof(t_list));
   t_list *root =&qalwa;
  t_list *zb= malloc(sizeof(t_list));
  ft_lstadd_front(qalwa,zb);
  
  
}
