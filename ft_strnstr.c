/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:34:10 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:27:59 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		ctr1;
	int		ctr2;
	int		i;

	ctr1 = 0;
	ctr2 = 0;
	i = 0;
	while (haystack[ctr1] != '\0' && ctr1 < (int)len)
	{
		while (haystack[ctr1] == needle[ctr2])
		{
			i++;
			ctr1++;
			ctr2++;
		}
		if (needle[ctr2] == '\0' && (needle[ctr2 - 1]) == (haystack[ctr1 - 1]))
			return ((char*)&haystack[ctr1 - i]);
		else
			ctr2 = 0;
		ctr1++;
	}
	return (NULL);
}
