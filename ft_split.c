/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:17:56 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/22 08:17:58 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count_words(char *str, char c)
{
  int counter, index;
  counter =0;
  index =0;
  
  while(*str)
  {
    if(*str == c)
    {
    counter++;
    }
    str++;
    index++;
  }
  return(index - counter);
  
}
// int main()
// {
//   char *str ="hossine**eddahbi";
//   char c ='*';
//   printf("%d",count_words(str,c));
// }
