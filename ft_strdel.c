/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 11:19:31 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:27:59 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
