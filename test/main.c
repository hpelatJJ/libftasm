/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpelat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 16:53:15 by hpelat            #+#    #+#             */
/*   Updated: 2019/03/01 16:59:10 by hpelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "libasm.h"

int		main(void)
{
	if (ft_isalpha('a'))
		printf("'a' est un caractere alphabetique.\n");
	else
		printf("'a' n'est pas un caractere alphabetique.\n");
	if (ft_isalpha('_'))
		printf("'_' est un caractere alphabetique.\n");
	else
		printf("'_' n'est pas un caractere alphabetique.\n");

	char	s[] = "C'est un test";
	printf("\n== TEST BZERO ==\n");
	printf("1. %s\n", s);
	// ft_bzero(s, 14);
	printf("2. %s\n", s);

	printf("___strlen : %zu\n", strlen(s));
	printf("ft_strlen : %zu\n", ft_strlen(s));

	puts("");
	ft_puts("");

	puts(NULL);
	ft_puts(NULL);

	puts(s);
	ft_puts(s);

	ft_memset(s, 'k', 13);
	ft_puts(s);
	ft_memcpy(s, "lalalalalalao", 13);
	ft_puts(s);
	
	char	*str;
	str = ft_strdup(s);
	ft_puts(str);

	puts("\n\n+++ TEST DE FT_CAT +++\n\n");
	int		fd;
	fd = open("Makefile", O_RDONLY);
	// ft_cat(fd);
	close(fd);
	char	*test;
	test = strdup(str);
	char	*s1 = "Hello World";
	// char	*s2 = "HeWp asdad";
	char	*s3 = "Hello Worldaasasda";
	int 	ret;
	
	ret = ft_strncmp(s1, s3, 4);
	printf("\n1. [ %d ] - [ %hhd ]\n", ret, (char)ret);
	
	ret = strncmp(s1, s3, 4);
	printf("2. [ %d ] - [ %hhd ]\n\n\n", ret, (char)ret);

	printf("my: %d\nsys: %d\n", ft_strncmp(s1, s1, 4), strncmp(s1, s1, 4));

/***********************************************************************************/

	ret = ft_strcmp(s1, s3);
	printf("\n_______________________________________\n\n1. [ %d ] - [ %hhd ]\n", ret, (char)ret);
	
	ret = strcmp(s1, s3);
	printf("2. [ %d ] - [ %hhd ]\n\n\n", ret, (char)ret);

	printf("my: %d\nsys: %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));

/***********************************************************************************/

	printf("\n\nft_memchr : %p\n", ft_memchr("abcdefghijkl", 'v', 12));
	printf("___memchr : %p\n", memchr("abcdefghijkl", 'v', 12));
}
