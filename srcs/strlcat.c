/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:23:02 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/21 22:28:51 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	c;
	size_t	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
int main()
{
    char dest[] ="";
    char src[]="8";
    printf("%lu\n",ft_strlcat(dest,src,1));
     printf("%lu",strlcat(dest,src,1));
}

