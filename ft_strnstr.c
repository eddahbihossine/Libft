
#include "libft.h"

char *ft_strnstr(const char * s1, const char * s2, size_t len)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
  
    if(s2[j] == '\0')
    return((char *)s1);
    while(s1[i] && i < len)
    {
        while(s1[i + j] == s2[j] && s1[i + j] != '\0')
       
            j++;
            if(s2[j] == '\0')
            return((char *)s1 + i);
            j = 0;
            i++;
    }
    return(0);
}
int main()
{
    char *hh ="hossine huwa li hwa mountassir";
    char *lga ="li";
    printf("%s",ft_strnstr(hh,lga,6));
}