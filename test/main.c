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
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../inc/libasm.h"

int		main(void)
{
	int		fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	close(fd);

	char	*str = strdup("123456789");
	ft_puts(str);
	ft_memset(str, 'o', ft_strlen(str));
	ft_puts(str);
}