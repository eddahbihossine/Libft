/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heddahbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:12:51 by heddahbi          #+#    #+#             */
/*   Updated: 2022/10/16 23:13:04 by heddahbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_trlen(int i)
{
  
  int len = 0;
    if( i == 0)
  {
    len++;
  }
  if(i < 0)
  {
    i *= -1;
    len++;
  }
  while(i > 0)
  {
    i /= 10;
    len++;
  }

return(len);
  
}
char *ft_itoa(int n)
{
  int index = ft_trlen(n);
  char *p = malloc(sizeof(char) * ft_trlen(n) + 1);
  
  if (n == 0)
{
  p[0] = '0';
}
  if(n < 0)
  {
    p[0] = '-';
    n *= - 1;
  }
  p[index--] = '\0';

  while(n > 0)
  {
    
    p[index] = (n % 10) + 48;
    n = n / 10;
    index--;
  }

return p;

  
    
}
int main()
{
int p =9;
    char *s =ft_itoa(p);
    printf("%s",s);
  
  
    
}