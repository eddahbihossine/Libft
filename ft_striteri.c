/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 05:33:54 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/18 05:33:57 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int index;
    index =0;
    if(*s)
    {
        f(index,&s[index]);
        
    
    }
}
void f(unsigned int i , char*s)
{
    while(s[i])
    {
        write( 1,&s[i],1);
        i++;
    }
}
int main()
{
    char *p = "hossine";
    ft_striteri(p,f);
}
