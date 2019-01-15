/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 14:59:07 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:44:39 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		index;
	int		char_index;

	ret = (char**)ft_memalloc_2d(30, 30);
	index = 0;
	char_index = 0;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s == c)
		{
			ret[index++][char_index] = '\0';
			char_index = 0;
		}
		while (*s == c)
			s++;
		ret[index][char_index++] = *s++;
	}
	ret[index][char_index] = '\0';
	return (ret);
}

