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
node *head,*x,*u;
head = ft_lstnew(x);
head->content =89;
head->next = ft_lstnew(u);
printf("%d",head->content);

 
 return 0;
}
