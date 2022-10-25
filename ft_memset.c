#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    size_t index;
    index= 0;
    unsigned char *str;
    str= (unsigned char *)s;
    while(index < n)
    {
            str[index] = (unsigned char)c;
            index++;
    }
    return(str);
}
// int main()
// {
//     int p;
//     p = 0;
//     ft_memset(&p, 3, 3);
//     printf("%d",p);
//     return 0;
// }