/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:59:22 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/21 05:59:23 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *src)
{
	int		i;
	size_t	len;
	char	*p;

	i = 0;
	len = ft_strlen(src);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (0);
	while (src[i] != '\0')	
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
int main()
{
    char *str ="hello bitch ";
    char *h =ft_strdup(str);
    printf("%s",h);
}