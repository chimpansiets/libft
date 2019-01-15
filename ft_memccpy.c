/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 11:32:44 by svoort         #+#    #+#                */
/*   Updated: 2019/01/15 14:52:00 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdio.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	*src;

	if (s1 == s2 || n <= 0)
		return (s1);
	i = 0;
	ret = (unsigned char*)s1;
	src = (unsigned char*)s2;
	while (i < n)
	{
		ret[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (ret + i + 1);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	unsigned char	src[] = "test basic du memccpy !";
	unsigned char	buff1[22];

	memset(buff1, 0, sizeof(buff1));

	unsigned char	*r1 = memccpy(buff1, src, 'm', 22);
	unsigned char	*r2 = ft_memccpy(buff1, src, 'm', 22);

	printf("%s\n", r1);
	printf("%s\n", r2);
	return (0);
}
*/