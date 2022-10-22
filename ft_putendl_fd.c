/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:45:56 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/21 22:32:01 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void ft_putendl_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd,s,1);
		write(fd,"\n",1);
	s++;
	}
}
int main()
{
	int *c ="dsfhdjk";

	ft_putendl_fd(c,1);
}
