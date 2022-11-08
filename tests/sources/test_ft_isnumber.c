/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isnumber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:01:04 by maolivei          #+#    #+#             */
/*   Updated: 2022/11/08 14:46:35 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_valid_numbers(void)
{
	TEST_ASSERT_TRUE(ft_isnumber("1"));
	TEST_ASSERT_TRUE(ft_isnumber("-1"));
	TEST_ASSERT_TRUE(ft_isnumber("+1"));
	TEST_ASSERT_TRUE(ft_isnumber("01"));
	TEST_ASSERT_TRUE(ft_isnumber("-01"));
	TEST_ASSERT_TRUE(ft_isnumber("+01"));
}

void	test_invalid_numbers(void)
{
	TEST_ASSERT_FALSE(ft_isnumber("a"));
	TEST_ASSERT_FALSE(ft_isnumber(" "));
	TEST_ASSERT_FALSE(ft_isnumber("1-"));
	TEST_ASSERT_FALSE(ft_isnumber("1+"));
	TEST_ASSERT_FALSE(ft_isnumber("+-1"));
	TEST_ASSERT_FALSE(ft_isnumber("-+1"));
	TEST_ASSERT_FALSE(ft_isnumber("1.1."));
	TEST_ASSERT_FALSE(ft_isnumber(".1.1"));
	TEST_ASSERT_FALSE(ft_isnumber("."));
	TEST_ASSERT_FALSE(ft_isnumber("+"));
	TEST_ASSERT_FALSE(ft_isnumber("-"));
	TEST_ASSERT_FALSE(ft_isnumber("--2"));
	TEST_ASSERT_FALSE(ft_isnumber("++2"));
	TEST_ASSERT_FALSE(ft_isnumber("+."));
	TEST_ASSERT_FALSE(ft_isnumber(".+"));
	TEST_ASSERT_FALSE(ft_isnumber("-."));
	TEST_ASSERT_FALSE(ft_isnumber(".-"));
	TEST_ASSERT_FALSE(ft_isnumber(".-"));
}

void	test_ft_isnumber(void)
{
	RUN_TEST(test_valid_numbers);
	RUN_TEST(test_invalid_numbers);
}
