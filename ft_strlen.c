/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:42:01 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/05 21:43:46 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

size_t ft_strlen(const char *str)
{
	size_t	i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
