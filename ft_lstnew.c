#include <stdlib.h>
typedef struct node{
  void* content;
  struct node *next;

}node;
node *ft_lstnew(void *content)
{
  node *p =malloc(sizeof(node));
  p->content=content;
  p->next=NULL;
  }


int main() {
node *head,*x,*u,*s;
head = ft_lstnew(x);
head->content =89;
head->next = ft_lstnew(u);
head->next->content =87;
head->next->next=ft_lstnew(s);
head->next->next->content =88;
printf("%d",head->next->next->content);

 
 return 0;
}
