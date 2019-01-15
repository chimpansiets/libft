/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 16:22:51 by svoort         #+#    #+#                */
/*   Updated: 2019/01/15 16:42:45 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg_or_pos;
	int ret;
	int	char_found;

	i = 0;
	neg_or_pos = 1;
	ret = 0;
	char_found = 0;
	while (str[i] != '\0' && str[i] != '\e')
	{
		if (!ft_isdigit(str[i]) && char_found == 1)
			return (ret * neg_or_pos);
		else if (str[i] == '-' && char_found == 0)
		{
			char_found = 1;
			neg_or_pos = -1;
		}
		else if (ft_isdigit(str[i]))
		{
			char_found = 1;
			ret = (ret * 10) + str[i] - '0';
		}
		i++;
	}
	return (ret * neg_or_pos);
}
