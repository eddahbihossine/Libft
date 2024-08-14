#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  int index;
  index =ft_strlen(s);
  while(*s && s[index]!= c)
    index--;
    return((char*)s);
}
int main()
{
  char s[] ="dhj*sfdhj*fdjksf";
  printf( "%s",ft_strrchr(s,'*'));
}