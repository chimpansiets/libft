/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:49:33 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:27:59 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		i2;
	int		destlen;
	int		maxlen;

	i = ft_strlen(dest);
	i2 = 0;
	destlen = i;
	maxlen = ft_strlen(src) + ft_strlen(dest);
	while (i < maxlen && i < (int)(destlen + n))
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
