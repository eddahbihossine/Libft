/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:11:48 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/21 22:11:54 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
  int index;
  index =0;
  while(*s && s[index] != c)
    s++;
    return(&s[index]);
}
int main()
{
  char s[] ="dhjsfdhj*fdjksf";
  printf( "%s",ft_strchr(s,'*'));
}
