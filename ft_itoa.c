/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:46:30 by svoort         #+#    #+#                */
/*   Updated: 2019/01/19 14:25:49 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlenofuint(int n)
{
	int i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

static char		*return_zerostr(void)
{
	char *zero;

	zero = (char*)malloc(sizeof(char) * 2);
	zero[0] = '0';
	zero[1] = '\0';
	return (zero);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	ctr;
	int				is_min;

	len = ft_strlenofuint(n);
	ctr = n;
	is_min = 0;
	if (n < 0)
	{
		is_min = 1;
		ctr = -n;
		len++;
	}
	else if (n == 0)
		return (return_zerostr());
	if (!(str = ft_strnew(ft_strlenofuint(n) + 1)))
		return (NULL);
	str[len] = '\0';
	str[--len] = (ctr % 10) + '0';
	while (ctr /= 10)
		str[--len] = (ctr % 10) + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
