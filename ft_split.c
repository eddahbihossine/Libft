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

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
// int main()
// {
//   char *str ="hossine**eddahbi";
//   char c ='*';
//   printf("%d",count_words(str,c));
// }
