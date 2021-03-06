/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:59:31 by aparrot           #+#    #+#             */
/*   Updated: 2016/11/15 14:06:45 by aparrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	i;
	size_t	size_src;

	size_dst = ft_strlen(dst);
	i = size_dst;
	size_src = ft_strlen(src);
	if (size < size_dst)
		return (size + size_src);
	while (i < (size - 1) && *src)
		*(dst + (i++)) = *src++;
	*(dst + i) = '\0';
	return (size_dst + size_src);
}
