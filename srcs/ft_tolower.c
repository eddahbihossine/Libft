/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 06:01:43 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/21 06:01:44 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return(c + 32);
    return(0);
    
}
// int main()
// {
//     int c ='A';
   
//     printf("%s", ft_tolower(c));
// }