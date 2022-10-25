#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t index;
  index =0;
  unsigned char const *str1, *str2;
  str1 = s1;
  str2 = s2;

if(!(str1[index] ||str2[index]))
	   return((unsigned)str1[index] - (unsigned)str2[index]);

  while(index < n)
  {
    if(str1[index] != str2[index] )
    return(&str1[index] - &str2[index]);
    index++;
  }
  return(0);
}
// int main()
// {
//   char s1[] ="hossine";
//   char s2[] ="hissine";
//   printf("%d\n",ft_memcmp(s1,s2,7));
//    printf("%d\n",memcmp(s1,s2,7));
  
  
// }