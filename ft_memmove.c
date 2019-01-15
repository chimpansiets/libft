/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 11:38:36 by svoort         #+#    #+#                */
/*   Updated: 2019/01/15 17:22:25 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*csrc;
	char	*cdst;
	char	*temp;

	i = 0;
	csrc = (char*)src;
	cdst = (char*)dst;
	temp = (char*)malloc(sizeof(char)*len);
	while (i < len && temp)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len && csrc)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
