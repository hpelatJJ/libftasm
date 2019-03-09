/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpelat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 16:53:15 by hpelat            #+#    #+#             */
/*   Updated: 2019/03/08 18:11:41 by hpelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libasm.h"

int		main(void)
{
	printf(YELLOW "\n === FT_BZERO ===%s\n", INIT);
	void	*s1 = strdup("abcdef");
	void	*s2 = strdup("abcdef");

	printf("ft_bzero: [ %s ] --> [ ", s1);
	ft_bzero(s1, 6);
	printf("%s ]\n", s1);
	printf("___bzero: [ %s ] --> [ ", s2);
	bzero(s2, 6);
	printf("%s ]\n", s2);

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_CAT ===%s\n", INIT);

	int		fd = open("Makefile", O_RDONLY);

	ft_cat(fd);
	close(fd);

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_ISALNUM ===%s\n", INIT);

	printf("ft_isalnum(4): %d\n", ft_isalnum(4));
	printf("___isalnum(4): %d\n\n", isalnum(4));
	
	printf("ft_isalnum('H'): %d\n", ft_isalnum('H'));
	printf("___isalnum('H'): %d\n\n", isalnum('H'));

	printf("ft_isalnum('*'): %d\n", ft_isalnum('*'));
	printf("___isalnum('*'): %d\n\n", isalnum('*'));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_ISALPHA ===%s\n", INIT);

	printf("ft_isalpha('H'): %d\n", ft_isalpha('H'));
	printf("___isalpha('H'): %d\n\n", isalpha('H'));

	printf("ft_isalpha('u'): %d\n", ft_isalpha('u'));
	printf("___isalpha('u'): %d\n\n", isalpha('u'));

	printf("ft_isalpha('*'): %d\n", ft_isalpha('*'));
	printf("___isalpha('*'): %d\n\n", isalpha('*'));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_ISASCII ===%s\n", INIT);
	
	printf("ft_isascii('H'): %d\n", ft_isascii('H'));
	printf("___isascii('H'): %d\n\n", isascii('H'));

	printf("ft_isascii('*'): %d\n", ft_isascii('*'));
	printf("___isascii('*'): %d\n\n", isascii('*'));

	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("___isascii(127): %d\n\n", isascii(127));

	printf("ft_isascii(239): %d\n", ft_isascii(239));
	printf("___isascii(239): %d\n\n", isascii(239));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_ISDIGIT ===%s\n", INIT);

	printf("ft_isdigit('4'): %d\n", ft_isdigit('4'));
	printf("___isdigit('4'): %d\n\n", isdigit('4'));

	printf("ft_isdigit(57): %d\n", ft_isdigit(57));
	printf("___isdigit(57): %d\n\n", isdigit(57));

	printf("ft_isdigit('*'): %d\n", ft_isdigit('*'));
	printf("___isdigit('*'): %d\n\n", isdigit('*'));

/* ************************************************************************** */

	printf(PURPLE "\n\n === FT_ISLOWER ===%s\n", INIT);

	printf("ft_islower('h'): %d\n", ft_islower('h'));
	printf("___islower('h'): %d\n\n", islower('h'));

	printf("ft_islower('H'): %d\n", ft_islower('H'));
	printf("___islower('H'): %d\n\n", islower('H'));

	printf("ft_islower('*'): %d\n", ft_islower('*'));
	printf("___islower('*'): %d\n\n", isupper('*'));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_ISPRINT ===%s\n", INIT);

	printf("ft_isprint('H'): %d\n", ft_isprint('H'));
	printf("___isprint('H'): %d\n\n", isprint('H'));

	printf("ft_isprint('u'): %d\n", ft_isprint('u'));
	printf("___isprint('u'): %d\n\n", isprint('u'));

	printf("ft_isprint('*'): %d\n", ft_isprint('*'));
	printf("___isprint('*'): %d\n\n", isprint('*'));

	printf("ft_isprint(127): %d\n", ft_isprint(127));
	printf("___isprint(127): %d\n\n", isprint(127));

/* ************************************************************************** */

	printf(PURPLE "\n\n === FT_ISUPPER ===%s\n", INIT);

	printf("ft_isupper('H'): %d\n", ft_isupper('H'));
	printf("___isupper('H'): %d\n\n", isupper('H'));

	printf("ft_isupper('h'): %d\n", ft_isupper('h'));
	printf("___isupper('h'): %d\n\n", isupper('h'));

	printf("ft_isupper('*'): %d\n", ft_isupper('*'));
	printf("___isupper('*'): %d\n\n", isupper('*'));

/* ************************************************************************** */

	printf(PURPLE "\n\n === FT_MEMCHR ===%s\n", INIT);

	printf("ft_memchr %p\n", ft_memchr("abcdef", 'd', 6));
	printf("___memchr %p\n\n", memchr("abcdef", 'd', 6));

	printf("ft_memchr %p\n", ft_memchr("abcdef", 'i', 6));
	printf("___memchr %p\n\n", memchr("abcdef", 'i', 6));

	printf("ft_memchr %p\n", ft_memchr(NULL, 'd', 0));
	printf("___memchr %p\n\n", memchr(NULL, 'd', 0));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_MEMCPY ===%s\n", INIT);

	char	*s3 = strdup("abcdef");
	char	*s4 = strdup("abcdef");
	char	*s5 = strdup("123456");
	char	*s6 = strdup("123456");

	printf("ft_memcpy(%s, \"789987\", 6): ", s3);
	fflush(0);
	printf("%s\n", ft_memcpy(s4, "789987", 6));
	printf("___memcpy(%s, \"789987\", 6): ", s3);
	fflush(0);
	printf("%s\n\n", memcpy(s4, "789987", 6));

	printf("ft_memcpy(%s, \"abcdef\", 3): ", s5);
	fflush(0);
	printf("%s\n", ft_memcpy(s4, "abcdef", 3));
	printf("___memcpy(%s, \"abcdef\", 3): ", s6);
	fflush(0);
	printf("%s\n\n", memcpy(s4, "abcdef", 3));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_MEMSET ===%s\n", INIT);

	printf("ft_memset(%s, 'H', 6): ", s3);
	fflush(0);
	printf("%s\n", ft_memset(s3, 'H', 6));
	printf("___memset(%s, 'H', 6): ", s4);
	fflush(0);
	printf("%s\n\n", memset(s4, 'H', 6));

	printf("ft_memset(%s, 'u', 3): ", s5);
	fflush(0);
	printf("%s\n", ft_memset(s5, 'u', 3));
	printf("___memset(%s, 'u', 3): ", s6);
	fflush(0);
	printf("%s\n\n", memset(s6, 'u', 3));

	printf("ft_memset(%s, 0, 6): ", s5);
	fflush(0);
	printf("%s\n", ft_memset(s5, 0, 6));
	printf("___memset(%s, 0, 6): ", s6);
	fflush(0);
	printf("%s\n\n", memset(s6, 0, 6));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_PUTS ===%s\n", INIT);

	char	*s7 = strdup("abcdefghijklmnopqrstuvwxyz");
	char	*s8 = strdup("abcdefghijklmnopqrstuvwxyz");

	printf("ft_puts(%s): ", s7);
	fflush(0);
	ft_puts(s7);
	printf("___puts(%s): ", s8);
	fflush(0);
	puts(s8);
	printf("\n");

	printf("ft_puts(\"\"): ");
	fflush(0);
	ft_puts("");
	printf("___puts(\"\"): ");
	fflush(0);
	puts("");
	printf("\n");

	printf("ft_puts(NULL): ");
	fflush(0);
	ft_puts(NULL);
	printf("___puts(NULL): ");
	fflush(0);
	puts(NULL);
	printf("\n");

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_STRCAT ===%s\n", INIT);

	s7[9] = 0;
	s8[9] = 0;

	printf("ft_strcat(%s, \"123456789\"): ", s7);
	fflush(0);
	printf("%s\n", ft_strcat(s7, "123456789"));
	printf("___strcat(%s, \"123456789\"): ", s8);
	fflush(0);
	printf("%s\n\n", strcat(s8, "123456789"));

/* ************************************************************************** */

	printf(PURPLE "\n\n === FT_STRCMP ===%s\n", INIT);

	char	*s9 = "Hello World";
	char	*s10 = "Hello World dlroW ollEH";

	printf("ft_strcmp(%s, %s): %d\n", s7, s8, ft_strcmp(s7, s8));
	printf("___strcmp(%s, %s): %d\n\n", s7, s8, strcmp(s7, s8));

	printf("ft_strcmp(%s, %s): %d\n", s7, s4, ft_strcmp(s7, s4));
	printf("___strcmp(%s, %s): %d\n\n", s7, s4, strcmp(s7, s4));

	printf("ft_strcmp(%s, %s): %d\n", s9, s10, ft_strcmp(s9, s10));
	printf("___strcmp(%s, %s): %d\n\n", s9, s10, strcmp(s9, s10));

	printf("ft_strcmp(%s, %s): %d\n", s10, s9, ft_strcmp(s10, s9));
	printf("___strcmp(%s, %s): %d\n\n", s10, s9, strcmp(s10, s9));

	printf("ft_strcmp(\"\", \"\"): %d\n", ft_strcmp("", ""));
	printf("___strcmp(\"\", \"\"): %d\n\n", strcmp("", ""));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_STRDUP ===%s\n", INIT);

	printf("ft_strdup(%s): %s\n", s7, ft_strdup(s7));
	printf("___strdup(%s): %s\n\n", s7, strdup(s7));

	printf("ft_strdup(%s): %s\n", "s7", ft_strdup("s7"));
	printf("___strdup(%s): %s\n\n", "s7", strdup("s7"));

	printf("ft_strdup(%s): %s\n", "", ft_strdup(""));
	printf("___strdup(%s): %s\n\n", "", strdup(""));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_STRLEN ===%s\n", INIT);

	printf("ft_strlen(%s): %zu\n", s7, ft_strlen(s7));
	printf("___strlen(%s): %zu\n\n", s7, strlen(s7));

	printf("ft_strlen(%s): %zu\n", "s7", ft_strlen("s7"));
	printf("___strlen(%s): %zu\n\n", "s7", strlen("s7"));

	printf("ft_strlen(%s): %zu\n", "", ft_strlen(""));
	printf("___strlen(%s): %zu\n\n", "", strlen(""));

/* ************************************************************************** */

	printf(PURPLE "\n\n === FT_STRCMP ===%s\n", INIT);

	printf("ft_strncmp(%s, %s, %d): %d\n", s9, s10, 55, ft_strncmp(s9, s10, 55));
	printf("___strncmp(%s, %s, %d): %d\n", s9, s10, 55, strncmp(s9, s10, 55));

	printf("\n\nft_strncmp(%s, %s, %d): %d\n", s9, s10, 55, ft_strncmp(s9, s10, 11));
	printf("___strncmp(%s, %s, %d): %d\n", s9, s10, 55, strncmp(s9, s10, 11));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_TOLOWER ===%s\n", INIT);

	printf("ft_tolower(%c): %c\n", 'H', (char)ft_tolower('H'));
	printf("___tolower(%c): %c\n\n", 'H', (char)tolower('H'));

	printf("ft_tolower(%c): %c\n", 'h', (char)ft_tolower('h'));
	printf("___tolower(%c): %c\n\n", 'h', (char)tolower('h'));

	printf("ft_tolower(%c): %c\n", '*', (char)ft_tolower('*'));
	printf("___tolower(%c): %c\n\n", '*', (char)tolower('*'));

/* ************************************************************************** */

	printf(YELLOW "\n\n === FT_TOUPPER ===%s\n", INIT);

	printf("ft_toupper(%c): %c\n", 'h', (char)ft_toupper('h'));
	printf("___toupper(%c): %c\n\n", 'h', (char)toupper('h'));

	printf("ft_toupper(%c): %c\n", 'H', (char)ft_toupper('H'));
	printf("___toupper(%c): %c\n\n", 'H', (char)toupper('H'));

	printf("ft_toupper(%c): %c\n", '*', (char)ft_toupper('*'));
	printf("___toupper(%c): %c\n\n", '*', (char)toupper('*'));

	return (EXIT_SUCCESS);
}
