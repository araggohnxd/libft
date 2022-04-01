/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:39:59 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/31 22:37:52 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*start_dest;
	char	*start_src;

	start_dest = dest;
	start_src = src;
	if (dest > src)
	{
		while (n-- > 0)
			start_dest[n] = start_src[n];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
