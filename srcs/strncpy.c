/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:15:10 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/11 22:51:55 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	i=0;


	if(!(str1[i] ||str2[i]))
	   return((unsigned)str1[i] - (unsigned)str2[i]);
	while( str1[i] && i < n )
	{
		if(str1[i] != str2[i])
			return((unsigned)str1[i] - (unsigned)str2[i]);
		i++;
	}
	return(0);
}
int	main()
{
	char h[] ="\0";
	char hh[] ="\0";
	printf("%d\n",ft_strncmp(h,hh,2));
	// printf("%d",);
}
