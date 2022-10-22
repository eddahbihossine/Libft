/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:48:32 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/08 02:48:43 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void * dest,  void * const src, size_t n)
{
    size_t index;
    index=0;
    
    unsigned const char *s =src;
    char *d =dest;
    while(*s && index < n)
    {
        d[index] = s[index];
        index++;
    }
    return(d);
}
// int main()
// {
//      char hh[] ={0,1,2,3,4,5,6,7,8,9,10};
//      int hhl =10;
    
//     int i;
//      i=0;
//     ft_memcpy(&hh[0],&hh[5],6);
//    while(i < hhl)
//    {
//         printf("%d",hh[i]);
//         i++;
//    }
    
// }
