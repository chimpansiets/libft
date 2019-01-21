/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlenofuint.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 16:09:17 by svoort         #+#    #+#                */
/*   Updated: 2019/01/18 10:24:44 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenofuint(int n)
{
	if (n >= 10)
		return (1 + ft_strlenofuint(n / 10));
	else
		return (1);
}
