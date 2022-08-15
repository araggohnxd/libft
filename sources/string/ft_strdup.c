/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:05:00 by maolivei          #+#    #+#             */
/*   Updated: 2022/08/15 02:15:42 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const size_t	length = ft_strlen(s) + 1;
	char			*dup;

	dup = (char *)malloc(sizeof(char) * length);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, length);
	return (dup);
}
