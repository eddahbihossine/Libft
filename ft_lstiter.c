typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
void ft_lstiter(t_list *root,void (*f)(void *))
 {
   char h[]= "hjskdjd";
   char j[] ="djdhjkdf";
   root->next= malloc(sizeof(t_list));
   root->next ->content = h;
   root->next->next = malloc(sizeof(t_list));
   root->next ->next->content = j;
   
   
   f(root);
   
 }
 void f(t_list *root)
 {
   t_list *curr =root;
    while(curr != NULL)
    printf("%s",curr ->next ->content);
    curr =curr ->next;
 }
int main()
{
  t_list *root;
  ft_lstiter(root);
  
}
