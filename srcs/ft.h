#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char	*ft_strdup(char *src);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memcpy(void * dest,  void * const src, size_t n);
size_t ft_strlen( const char *str);
#endif
