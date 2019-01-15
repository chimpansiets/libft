/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 13:30:50 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:27:59 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*newptr;
	size_t	oldsize;

	oldsize = ft_getmemsize(ptr);
	if (oldsize == 0)
		return (malloc(size));
	if (size <= oldsize)
		return (ptr);
	newptr = malloc(sizeof(*ptr) * size);
	ft_memcpy(newptr, ptr, oldsize);
	free(ptr);
	return (newptr);
}
