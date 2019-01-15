/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 16:39:20 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 16:32:34 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	int				i;

	i = 0;
	if ((*s1) == '\0' && (*s2) == '\0')
		return (0);
	u_s1 = (unsigned char*)s1;
	u_s2 = (unsigned char*)s2;
	if ((*s1) == '\0' || (*s2) == '\0')
		return (u_s1[i] - u_s2[i]);
	while (u_s1[i] != '\0' && u_s2[i] != '\0')
	{
		if (u_s1[i] < u_s2[i] || u_s1[i] > u_s2[i])
			return (u_s1[i] - u_s2[i]);
		i++;
	}
	return (0);
}
