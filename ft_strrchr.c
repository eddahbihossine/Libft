#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
  int index;
  index =strlen(s);
  while(*s && s[index]!= c)
    index--;
    return(&s[index]);
}
int main()
{
  char s[] ="dhj*sfdhj*fdjksf";
  printf( "%s",ft_strrchr(s,'*'));
}