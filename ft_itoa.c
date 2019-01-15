/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:46:30 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 14:27:59 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	char	*ptr;
	int		ctr;

	str = (char*)malloc(sizeof(char) * 64);
	ptr = str;
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return ((char*)"-2147483648");
	if (n < 0)
	{
		*str++ = '-';
		n = -n;
	}
	ctr = ft_pow(10, ft_strlenofuint(n) - 1);
	while (n > 0)
	{
		*str++ = (n / ctr) + '0';
		n = n % ctr;
		ctr /= 10;
	}
	*str = '\0';
	return (ptr);
}
