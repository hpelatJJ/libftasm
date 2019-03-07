/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpelat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 16:56:19 by hpelat            #+#    #+#             */
/*   Updated: 2019/03/01 18:17:08 by hpelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# define INIT			"\033[0m"
# define BLACK			"\033[0;30m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define YELLOW			"\033[0;33m"
# define BLUE			"\033[0;34m"
# define PURPLE			"\033[0;35m"
# define CYAN			"\033[0;36m"
# define WHITE			"\033[0;37m"

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <ctype.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int 	ft_isprint(int c);
int		ft_isupper(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_puts(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_bzero(void *s, size_t n);
void	ft_cat(int fd);

char	*ft_strcat(char *restrict s1, char *restrict s2);
char	*ft_strdup(const char *s1);

void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlen(const char *s);

#endif
