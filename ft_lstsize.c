int ft_lstsize(t_list *lst)
{
  int counter =0;
  while(lst)
  {
    counter++;
    lst =lst->next;
  }
  return(counter);
}
