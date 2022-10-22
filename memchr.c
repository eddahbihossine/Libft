#include "ft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
  int index;
  index =0;
  const char *o =s;
  while(*o && o[index] != c )
  o++;
  return((char *)(&o[index]));
}
int main()
{
  char p [] ="dhshgdh*dsg";
  printf("%s",ft_memchr(p,'*',12));
}