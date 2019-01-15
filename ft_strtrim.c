/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 13:31:18 by svoort         #+#    #+#                */
/*   Updated: 2019/01/14 15:29:27 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		i2;
	int		start;

	ret = ft_memalloc(ft_strlen(s) + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = i;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	while (start <= i)
		ret[i2++] = s[start++];
	return (ret);
}
