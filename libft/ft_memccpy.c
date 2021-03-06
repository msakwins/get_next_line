/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakwins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:55:59 by msakwins          #+#    #+#             */
/*   Updated: 2016/11/12 19:18:20 by msakwins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			i;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = sorc[i];
		if (sorc[i] == (unsigned char)c)
			return ((void *)dest + i + 1);
		i++;
	}
	return (NULL);
}
