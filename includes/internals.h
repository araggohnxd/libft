/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internals.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:46:17 by maolivei          #+#    #+#             */
/*   Updated: 2022/09/04 15:25:13 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNALS_H
# define INTERNALS_H

/* Standard file descriptors */
# define STDIN 0	/* Shortened STDIN file descriptor */
# define STDOUT 1	/* Shortened STDOUT file descriptor */
# define STDERR 2	/* Shortened STDERR file descriptor */

/* get_next_line related */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42	/* Standard buffer size for GNL */
# endif
# define MAX_FD_VALUE 1024	/* Max file descriptor value supported by GNL */

/* ft_printf related */
# define HEX_BASE_LOWER "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"
# define CHAR 'c'		/* ft_printf()'s character specifier */
# define STR 's'		/* ft_printf()'s string specifier */
# define PTR 'p'		/* ft_printf()'s pointer specifier */
# define DEC 'd'		/* ft_printf()'s decimal specifier */
# define INT 'i'		/* ft_printf()'s integer specifier */
# define UINT 'u'		/* ft_printf()'s unsigned int specifier */
# define HEXL 'x'		/* ft_printf()'s hexadecimal lowercase specifier */
# define HEXU 'X'		/* ft_printf()'s hexadecimal uppercase specifier */
# define PERCENT '%'	/* ft_printf()'s percentage symbol specifier */

/* Hashtable */
# define HASH_TABLE_SIZE 1031		/* Hashtable total size */
# define HASH_RIGHT_OFFSET 24		/* Right bit-shifting offset */
# define HASH_LEFT_OFFSET 4			/* Left bit-shifting offset */
# define HASH_LIMITER 0xf0000000	/* Hashing limiter */

typedef long long			t_llong;
typedef unsigned int		t_uint;
typedef unsigned long		t_ulong;
typedef unsigned long long	t_ullong;

/* Boolean values */
typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

/* The basic structure of a linked list node */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* The basic structure of a hashtable node */
typedef struct s_htnode
{
	char			*key;
	char			*value;
	struct s_htnode	*next;
}	t_htnode;

/* Hashtable structure */
typedef struct s_hashtable
{
	t_htnode	*item[HASH_TABLE_SIZE];
}	t_hashtable;

#endif /* INTERNALS_H */
