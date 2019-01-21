/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_getmemsize.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 14:52:11 by svoort         #+#    #+#                */
/*   Updated: 2019/01/18 10:24:44 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getmemsize(void *ptr)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ptr;
	while (str[i] != '\0')
		i++;
	return (i);
}
