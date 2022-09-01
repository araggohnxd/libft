/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:39:10 by maolivei          #+#    #+#             */
/*   Updated: 2022/09/01 14:42:17 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_specifier(int fd, char specifier, va_list ap)
{
	if (specifier == INT || specifier == DEC)
		return (ft_handler_integer(fd, va_arg(ap, int)));
	else if (specifier == UINT)
		return (ft_handler_unsigned(fd, va_arg(ap, t_uint)));
	else if (specifier == STR)
		return (ft_handler_string(fd, va_arg(ap, char *)));
	else if (specifier == PTR)
		return (ft_handler_pointer(fd, va_arg(ap, void *)));
	else if (specifier == HEXL || specifier == HEXU)
		return (ft_handler_hex(fd, specifier, va_arg(ap, t_uint)));
	else if (specifier == CHAR)
		return (ft_putchar_fd((char)va_arg(ap, int), fd), 1);
	else if (specifier == PERCENT)
		return (ft_putchar_fd('%', fd), 1);
	ft_putchar_fd('%', fd);
	ft_putchar_fd(specifier, fd);
	return (2);
}

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	int		chars_written;

	va_start(ap, format);
	chars_written = 0;
	while (*format)
	{
		while (*format && *format != '%')
		{
			ft_putchar_fd(*format++, fd);
			++chars_written;
		}
		if (*format == '%')
			chars_written += ft_handle_specifier(fd, *++format, ap);
		if (!*format)
			break ;
		++format;
	}
	va_end(ap);
	return (chars_written);
}
