/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:11:48 by heddahbi          #+#    #+#             */
/*   Updated: 2024/08/14 06:17:48 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char *ft_strchr(const char *s, int c)
{
  int index;
  index =0;
  while(*s && s[index] != c)
    s++;
    return(s[index] == c ? (char *)s : NULL);
}
int main()
{
  char s[] ="dhjsfdhj*fdjksf";
  printf( "%s",ft_strchr(s,'*'));
}
