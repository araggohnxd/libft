/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:57:45 by maolivei          #+#    #+#             */
/*   Updated: 2022/11/08 00:03:02 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	setUp(void)
{
	// set stuff up here
}

void	tearDown(void)
{
	// clean stuff up here
}

int	main(void)
{
	UNITY_BEGIN();
	test_ft_isfloat();
	test_ft_isnumber();
	return (UNITY_END());
}
