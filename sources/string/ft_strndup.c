/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:42:58 by maolivei          #+#    #+#             */
/*   Updated: 2023/04/25 21:39:41 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int loop = 0;

char	*ft_strndup(const char *s, size_t n)
{
	const size_t	length = ft_strnlen(s, n);
	char			*dup;

	if (loop >= 2)
		return (NULL);
		
	dup = (char *)malloc(sizeof(char) * (length + 1));
	if (!dup)
		return (NULL);
	dup[length] = '\0';

	++loop;

	return ((char *)ft_memcpy(dup, s, length));
}
