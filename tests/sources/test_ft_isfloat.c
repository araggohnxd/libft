/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isfloat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:01:04 by maolivei          #+#    #+#             */
/*   Updated: 2022/11/08 14:46:43 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_valid_floats(void)
{
	TEST_ASSERT_TRUE(ft_isfloat("1"));
	TEST_ASSERT_TRUE(ft_isfloat("-1"));
	TEST_ASSERT_TRUE(ft_isfloat("+1"));
	TEST_ASSERT_TRUE(ft_isfloat("01"));
	TEST_ASSERT_TRUE(ft_isfloat("-01"));
	TEST_ASSERT_TRUE(ft_isfloat("+01"));
	TEST_ASSERT_TRUE(ft_isfloat("10"));
	TEST_ASSERT_TRUE(ft_isfloat("-10"));
	TEST_ASSERT_TRUE(ft_isfloat("+10"));
	TEST_ASSERT_TRUE(ft_isfloat("010"));
	TEST_ASSERT_TRUE(ft_isfloat("-010"));
	TEST_ASSERT_TRUE(ft_isfloat("+010"));
	TEST_ASSERT_TRUE(ft_isfloat("10."));
	TEST_ASSERT_TRUE(ft_isfloat("+10."));
	TEST_ASSERT_TRUE(ft_isfloat("-10."));
	TEST_ASSERT_TRUE(ft_isfloat(".10"));
	TEST_ASSERT_TRUE(ft_isfloat("+.10"));
	TEST_ASSERT_TRUE(ft_isfloat("-.10"));
	TEST_ASSERT_TRUE(ft_isfloat("10.0"));
	TEST_ASSERT_TRUE(ft_isfloat("00.100"));
	TEST_ASSERT_TRUE(ft_isfloat("+00.100"));
	TEST_ASSERT_TRUE(ft_isfloat("-00.100"));
}

void	test_invalid_floats(void)
{
	TEST_ASSERT_FALSE(ft_isfloat("a"));
	TEST_ASSERT_FALSE(ft_isfloat(" "));
	TEST_ASSERT_FALSE(ft_isfloat("1-"));
	TEST_ASSERT_FALSE(ft_isfloat("1+"));
	TEST_ASSERT_FALSE(ft_isfloat("+-1"));
	TEST_ASSERT_FALSE(ft_isfloat("-+1"));
	TEST_ASSERT_FALSE(ft_isfloat("1.1."));
	TEST_ASSERT_FALSE(ft_isfloat(".1.1"));
	TEST_ASSERT_FALSE(ft_isfloat("."));
	TEST_ASSERT_FALSE(ft_isfloat("+"));
	TEST_ASSERT_FALSE(ft_isfloat("-"));
	TEST_ASSERT_FALSE(ft_isfloat("--2"));
	TEST_ASSERT_FALSE(ft_isfloat("++2"));
	TEST_ASSERT_FALSE(ft_isfloat("+."));
	TEST_ASSERT_FALSE(ft_isfloat(".+"));
	TEST_ASSERT_FALSE(ft_isfloat("-."));
	TEST_ASSERT_FALSE(ft_isfloat(".-"));
	TEST_ASSERT_FALSE(ft_isfloat(".-"));
}

void	test_ft_isfloat(void)
{
	RUN_TEST(test_valid_floats);
	RUN_TEST(test_invalid_floats);
}
