#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
  size_t index;
  index =0;
  const char *o =s;
  while(*o && o[index] != c && index < n)
  o++;
  return((unsigned char *)(&o[index]));
}
// int main()
// {
//   char p [] ="dhshgdh*dsg";
//   printf("%s",ft_memchr(p,'*',12));
// }