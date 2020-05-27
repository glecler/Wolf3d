/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glecler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 21:32:11 by glecler           #+#    #+#             */
/*   Updated: 2018/11/19 20:10:14 by glecler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t x;
	size_t y;

	x = 0;
	y = ft_strlen(s1);
	while (x < n && s2[x])
	{
		s1[x + y] = s2[x];
		x++;
	}
	s1[x + y] = '\0';
	return (s1);
}
