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

static int count_words(char *str, char c)
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

char    **ft_split(const char *s, char c)
{
    char    **p;
    size_t    i;
    size_t    len;

    if (!s)
        return (0);
    i = 0;
    p = malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!p)
        return (0);
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c && ++len)
                ++s;
            p[i++] = ft_substr(s - len, 0, len);
        }
        else
            s++;
    }
    p[i] = 0;
    return (p);
}
int main()
{
  char *str ="hossine**eddahbi";
  char c ='*';
  printf("%s",ft_split(str,c));
}
// int main()
// {
//   char *str ="hossine**eddahbi";
//   char c ='*';
//   printf("%d",count_words(str,c));
// }
