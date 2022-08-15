/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:57:22 by grenato-          #+#    #+#             */
/*   Updated: 2022/08/14 21:44:25 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_htclear(t_hashtable *table)
{
	int			index;
	t_htnode	*temp;

	index = -1;
	while (++index < HASH_TABLE_SIZE)
	{
		temp = table->item[index];
		if (temp)
			ft_htfree(temp);
	}
}
