/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:37:55 by aparrot           #+#    #+#             */
/*   Updated: 2016/11/17 22:39:15 by aparrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc_fd(char *s, int fd, size_t n)
{
	char	*buff;
	char	*tmp;
	int		ret;
	int		i;

	i = 0;
	if (!(buff = ft_strnew(n)))
		return (NULL);
	if (!(s = ft_strnew(0)))
		return (NULL);
	s[0] = '\0';
	while ((ret = read(fd, buff, n)))
	{
		buff[ret] = '\0';
		if (!(tmp = ft_strnew(ret + i)))
			return (NULL);
		ft_strcpy(tmp, s);
		ft_strcat(tmp, buff);
		free(s);
		s = tmp;
		i += ret;
	}
	free(buff);
	return (s);
}
