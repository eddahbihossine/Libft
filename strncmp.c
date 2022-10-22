#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2 ,size_t n) 
{
    size_t i ;
    i=0;
    while(s1[i] && s2[i] && i < n )
    {
        if(s1[i] != s2[i])
        return(s1[i] - s2[i]);
        i++;
    
    }
    return(0);
}
int main()
{
   char *h ="hello";
   char *hh ="bitches";
   printf("%d\n",ft_strncmp(h,hh,99));
   printf("%d",strncmp(h,hh,99));
}
