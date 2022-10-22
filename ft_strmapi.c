/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:36:41 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/18 04:36:45 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int index;
    index = 0;
     size_t len = strlen(s);
    char *p = malloc(sizeof(char) * len + 1);
     if(!p)
     return NULL;
    if(!s || !f)
    {
        return(NULL);
    }
    while(index < len )
    {
       p[index] = f(index,s[index]) ;
       index++;
    }
    p[index]= '\0';
    return (p);
}
char f(unsigned int i ,char s)
{
    char s2 ;
   s2 =s;
   return(s2);
 
    
}
int main()
{
    char *p = "hossine";
    char *s =ft_strmapi(p,f);
 printf("%s",s);
}
