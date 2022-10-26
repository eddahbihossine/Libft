#include "libft.h"

#include "libft.h"

/*This function allocates memory and returns a copy of the string passed in the
 * parameter but without any kind of blank spaces at the start or the end of
 * the string. This function considers blank spaces to be the characters ' ',
 * a standard space, '\n', a new line, and '\t', which is a tabulation space.
 * If there are no spaces at the beginning and end of the parameter string s
 * the function returns a copy of s. If the allocation of memory fails the
 * function returns NULL.*/

char		*ft_strtrim(char const *s)
{
	/*We start the function by delcaring four variables. The first three will
	 * be used as index counting variables. Once again we use unsigned in case
	 * we are dealing with a ridiculously long string. We also declare a new
	 * string str which is going to hold and return a copy of our parameter
	 * string.*/
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));

	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;

	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
