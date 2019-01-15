/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 11:38:36 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:59:56 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*csrc;
	char	*cdst;

	i = 0;
	csrc = (char*)src;
	cdst = (char*)dst;
	while (i < (int)len && csrc)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
