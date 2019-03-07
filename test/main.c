#include "../inc/libasm.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

static void		strncmp_test(void)
{
	char *s1;
	char *s2;

	s1 = "Hello World!";
	s2 = "Hello wOrld!";
	printf("\n=== STRNCMP ===\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, 12): %d\nstrncmp(s1, s2, 12): %d\n", ft_strncmp(s1, s2, 12), strncmp(s1, s2, 12));
	
	s1 = "Pour finir, vous devez coder une fonction ft_cat";
	s2 = "Pour la partie bonus vous êtes libres d’ajouter d’autres fonctions";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, len(s2)): %d\nstrncmp(s1, s2, len(s2)): %d\n", ft_strncmp(s1, s2, ft_strlen(s1)), strncmp(s1, s2, ft_strlen(s1)));
	
	s1 = "Pour finir, vous devez coder une fonction ft_cat";
	s2 = "Pour finir, vous devez coder une fonction ft_cat";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, len(s2) + 50): %d\nstrncmp(s1, s2, len(s2) + 50): %d\n", ft_strncmp(s1, s2, ft_strlen(s1) + 50), strncmp(s1, s2, ft_strlen(s1) + 50));


	s1 = "";
	s2 = "Pour la partie bonus vous êtes libres d’ajouter d’autres fonctions";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, len(s2)): %d\nstrncmp(s1, s2, len(s2)): %d\n", ft_strncmp(s1, s2, ft_strlen(s2)), strncmp(s1, s2, ft_strlen(s2)));
	
	s1 = "Pour la partie bonus vous êtes libres d’ajouter d’autres fonctions";
	s2 = "";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, len(s1)): %d\nstrncmp(s1, s2, len(s1)): %d\n", ft_strncmp(s1, s2, ft_strlen(s1)), strncmp(s1, s2, ft_strlen(s1)));

	s1 = "";
	s2 = "";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, 5): %d\nstrncmp(s1, s2, 5): %d\n", ft_strncmp(s1, s2, 5), strncmp(s1, s2, 5));

	s1 = "";
	s2 = "";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strncmp(s1, s2, 0): %d\nstrncmp(s1, s2, 0): %d\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
}

static void		strcmp_test(void)
{
	char *s1;
	char *s2;

	s1 = "Hello World!";
	s2 = "Hello wOrld!";
	printf("\n=== STRCMP ===\n");
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("ft_strcmp(s1): %d\nstrcmp(s1): %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	
	s1 = "Pour finir, vous devez coder une fonction ft_cat";
	s2 = "Pour la partie bonus vous êtes libres d’ajouter d’autres fonctions";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strcmp(s1): %d\nstrcmp(s1): %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));

	s1 = "";
	s2 = "Pour la partie bonus vous êtes libres d’ajouter d’autres fonctions";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strcmp(s1): %d\nstrcmp(s1): %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));

	s1 = "";
	s2 = "";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strcmp(s1): %d\nstrcmp(s1): %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	
	s1 = "Pour finir, vous devez coder une fonction ft_cat";
	s2 = "Pour finir, vous devez coder une fonction ft_cat";
	printf("\ns1: %s\ns2: %s\n", s1, s2);
	printf("ft_strcmp(s1, s2): %d\nstrcmp(s1, s2): %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));

}

static void		memchr_test(void)
{
	char *s1;

	s1 = "Hello World!\n";
	printf("\n=== MEMCHR ===\n");
	printf("s1: %s\n", s1);

	printf("ft_memchr(s1, \'\\n\', 13): %p\nmemchr(s1, \'\\n\', 13): %p\n", ft_memchr(s1, '\n', 13), memchr(s1, '\n', 13));
	printf("ft_memchr(s1, 'W', 13): %p\nmemchr(s1, 'W', 13): %p\n", ft_memchr(s1, 'W', 13), memchr(s1, 'W', 13));
	printf("ft_memchr(s1, 'A', 8): %p\nmemchr(s1, 'A', 8): %p\n", ft_memchr(s1, 'A', 8), memchr(s1, 'A', 8));
	printf("ft_memchr(s1, \'\\n\', 5): %p\nmemchr(s1, \'\\n\', 5): %p\n", ft_memchr(s1, '\n', 5), memchr(s1, '\n', 5));
	printf("ft_memchr(s1, ';', 13): %p\nmemchr(s1, ';', 13): %p\n", ft_memchr(s1, ';', 13), memchr(s1, ';', 13));
	printf("ft_memchr(s1, 'H', 0): %p\nmemchr(s1, 'H', 0): %p\n", ft_memchr(s1, 'H', 0), memchr(s1, 'H', 0));
}

static void		isupper_test(void)
{
	printf("\n=== ISUPPER ===\n");
	printf("ft_isupper(0): %d\nisupper(0): %d\n", ft_isupper(0), isupper(0));
	printf("ft_isupper('0'): %d\nisupper('0'): %d\n", ft_isupper('0'), isupper('0'));
	printf("ft_isupper('A'): %d\nisupper('A'): %d\n", ft_isupper('A'), isupper('A'));
	printf("ft_isupper(127): %d\nisupper(127): %d\n", ft_isupper(127), isupper(127));
	printf("ft_isupper('z'): %d\nisupper('z'): %d\n", ft_isupper('z'), isupper('z'));
	printf("ft_isupper(';'): %d\nisupper(';'): %d\n", ft_isupper(';'), isupper(';'));
	printf("ft_isupper('W'): %d\nisupper('W'): %d\n", ft_isupper('W'), isupper('W'));
	printf("ft_isupper(-31): %d\nisupper(-31): %d\n", ft_isupper(-31), isupper(-31));
}

static void		islower_test(void)
{
	printf("\n=== ISLOWER ===\n");
	printf("ft_islower(0): %d\nislower(0): %d\n", ft_islower(0), islower(0));
	printf("ft_islower('0'): %d\nislower('0'): %d\n", ft_islower('0'), islower('0'));
	printf("ft_islower('a'): %d\nislower('a'): %d\n", ft_islower('a'), islower('a'));
	printf("ft_islower(127): %d\nislower(127): %d\n", ft_islower(127), islower(127));
	printf("ft_islower('z'): %d\nislower('z'): %d\n", ft_islower('z'), islower('z'));
	printf("ft_islower(';'): %d\nislower(';'): %d\n", ft_islower(';'), islower(';'));
	printf("ft_islower('W'): %d\nislower('W'): %d\n", ft_islower('W'), islower('W'));
	printf("ft_islower(-31): %d\nislower(-31): %d\n", ft_islower(-31), islower(-31));
}

static void		strdup_test(void)
{
	char		*s1;
	char		*s2;

	printf("\n=== STRDUP ===\n");
	s1 = ft_strdup("Hello World!");
	s2 = strdup("Hello World!");
	printf("ft_strdup(\"Hello World!\"): %s\nstrdup(\"Hello World!\"): %s\n", s1, s2);

	free(s1);
	free(s2);

	s1 = ft_strdup("A");
	s2 = strdup("A");
	printf("ft_strdup(\"\"): %s\nstrdup(\"\"): %s\n", s1, s2);

	free(s1);
	free(s2);
	
	s1 = ft_strdup("");
	s2 = strdup("");
	printf("ft_strdup(\"\"): %s\nstrdup(\"\"): %s\n", s1, s2);

	free(s1);
	free(s2);

}

static void		memcpy_test(void)
{
	char	*s1;

	printf("\n=== MEMSET ===\n");
	s1 = (char *)malloc(sizeof(char) * 16);
	printf("s1: %p\n", s1);
	s1 = ft_memcpy(s1, "Hello, world!", 16);
	printf("ft_memcpy(s1, \"Hello, world!\",16): %s addr: %p\n", s1, s1);

	ft_memset(s1, 0, 16);
	s1 = memcpy(s1, "Hello, world!", 16);
	printf("memcpy(s1, \"Hello, world!\", 16): %s addr: %p\n", s1, s1);

	ft_memset(s1, 0, 16);
	s1 = ft_memcpy(s1, "Hello, world!", 5);
	printf("ft_memcpy(s1, \"Hello, world!\", 5): %s addr: %p\n", s1, s1);

	ft_memset(s1, 0, 16);
	s1 = memcpy(s1, "Hello, world!", 5);
	printf("memcpy(s1, \"Hello, world\", 5): %s addr: %p\n", s1, s1);

	ft_memset(s1, 0, 16);
	s1 = ft_memcpy(s1, "Hello, world!", 0);
	printf("ft_memcpy(s1, \"Hello, world!\", 0): %s addr: %p\n", s1, s1);

	ft_memset(s1, 0, 0);
	s1 = memcpy(s1, "Hello, world!", 0);
	printf("memcpy(s1, \"Hello, world\", 0): %s addr: %p\n", s1, s1);

	free(s1);
}

static void		memset_test(void)
{
	char	*s1;

	printf("\n=== MEMSET ===\n");
	s1 = (char *)malloc(sizeof(char) * 16);
	strcpy(s1, "Hello, world!");

	printf("s1: %s\n", s1);
	ft_memset(s1, 'A', 5);
	printf("ft_memset (s1, 'A', 5): %s\n", s1);

	strcpy(s1, "Hello, world!");
	memset(s1, 'A', 5);
	printf("memset (s1, 'A', 5): %s\n", s1);
	
	strcpy(s1, "Hello, world!");
	ft_memset(s1 + 7, 'A', 5);
	printf("ft_memset(s1 + 7, 0, 16): %s\n", s1);

	strcpy(s1, "Hello, world!");
	memset(s1 + 7, 'A', 5);
	printf("memset(s1 + 7, 0, 16): %s\n", s1);

	strcpy(s1, "Hello, world!");
	ft_memset(s1, 0, 16);
	printf("ft_memset(s1, 0, 16): %s\n", s1);

	strcpy(s1, "Hello, world!");
	memset(s1, 0, 16);
	printf("memset(s1, 0, 16): %s\n", s1);

	strcpy(s1, "Hello, world!");
	ft_memset(s1, 'A', 0);
	printf("ft_memset(s1, 'A', 0): %s\n", s1);

	strcpy(s1, "Hello, world!");
	memset(s1, 'A', 0);
	printf("memset(s1, 'A', 0): %s\n", s1);

	free(s1);
}

static void		strlen_test(void)
{
	printf("\n=== STRLEN ===\n");
	printf("ft_strlen(\"Hello World!\"): %zu\nstrlen(\"Hello World!\"): %zu\n", ft_strlen("Hello World!"), strlen("Hello World!"));
	printf("ft_strlen(\"A\"): %zu\nstrlen(\"A\"): %zu\n", ft_strlen("A"), strlen("A"));
	printf("ft_strlen(\"\"): %zu\nstrlen(\"\"): %zu\n", ft_strlen(""), strlen(""));
}

static void		puts_test(void)
{
	int		ret1;
	int		ret2;

	printf("\n=== PUTS ===\n");
	ret1 = ft_puts("Hello World!");
	ret2 = puts("Hello World!");
	printf("ft_puts: %d\nputs: %d\n", ret1, ret2);

	ret1 = ft_puts("");
	ret2 = puts("");
	printf("ft_puts: %d\nputs: %d\n", ret1, ret2);

	ret1 = ft_puts(NULL);
	ret2 = puts(NULL);
	printf("ft_puts: %d\nputs: %d\n", ret1, ret2);
}

static void		tolower_test(void)
{
	char	*s1;
	char	*s2;

	printf("\n=== TOLOWER ===\n");
	s1 = (char *)malloc(sizeof(char *) * 16);
	s2 = (char *)malloc(sizeof(char *) * 16);
	strcpy(s1, "HeLlo, wORld!");
	strcpy(s2, "HeLlo, wORld!");
	printf("Before:\ns1: %s\ns2: %s\n", s1, s2);
	for(int i = 0; i < 16; i++)
	{
		s1[i] = ft_tolower(s1[i]);
		s2[i] = ft_tolower(s2[i]);
	}
	printf("After:\ns1: %s\ns2: %s\n", s1, s2);

	ft_bzero(s1, 16);
	ft_bzero(s2, 16);
	printf("Before:\ns1: %s\ns2: %s\n", s1, s2);
	for(int i = 0; i < 16; i++)
	{
		s1[i] = ft_tolower(s1[i]);
		s2[i] = ft_tolower(s2[i]);
	}
	printf("After\ns1: %s\ns2: %s\n", s1, s2);
}

static void		toupper_test(void)
{
	char	*s1;
	char	*s2;

	printf("\n=== TOUPPER ===\n");
	s1 = (char *)malloc(sizeof(char *) * 16);
	s2 = (char *)malloc(sizeof(char *) * 16);
	strcpy(s1, "HeLlo, wORld!");
	strcpy(s2, "HeLlo, wORld!");
	printf("Before:\ns1: %s\ns2: %s\n", s1, s2);
	for(int i = 0; i < 16; i++)
	{
		s1[i] = ft_toupper(s1[i]);
		s2[i] = ft_toupper(s2[i]);
	}
	printf("After:\ns1: %s\ns2: %s\n", s1, s2);

	ft_bzero(s1, 16);
	ft_bzero(s2, 16);
	printf("Before:\ns1: %s\ns2: %s\n", s1, s2);
	for(int i = 0; i < 16; i++)
	{
		s1[i] = ft_toupper(s1[i]);
		s2[i] = ft_toupper(s2[i]);
	}
	printf("After:\ns1: %s\ns2: %s\n", s1, s2);
}

static void		isprint_test(void)
{
	printf("\n=== ISPRINT ===\n");
	printf("ft_isprint(0): %d\nisprint(0): %d\n", ft_isprint(0), isprint(0));
	printf("ft_isprint('0'): %d\nisprint('0'): %d\n", ft_isprint('0'), isprint('0'));
	printf("ft_isprint('a'): %d\nisprint('a'): %d\n", ft_isprint('a'), isprint('a'));
	printf("ft_isprint(127): %d\nisprint(127): %d\n", ft_isprint(127), isprint(127));
	printf("ft_isprint(157): %d\nisprint(157): %d\n", ft_isprint(157), isprint(157));
	printf("ft_isprint(';'): %d\nisprint(';'): %d\n", ft_isprint(';'), isprint(';'));
	printf("ft_isprint(31): %d\nisprint(31): %d\n", ft_isprint(31), isprint(31));
	printf("ft_isprint(-31): %d\nisprint(-31): %d\n", ft_isprint(-31), isprint(-31));
}

static void		isascii_test(void)
{
	printf("\n=== ISASCII ===\n");
	printf("ft_isascii(0): %d\nisascii(0): %d\n", ft_isascii(0), isascii(0));
	printf("ft_isascii('0'): %d\nisascii('0'): %d\n", ft_isascii('0'), isascii('0'));
	printf("ft_isascii('a'): %d\nisascii('a'): %d\n", ft_isascii('a'), isascii('a'));
	printf("ft_isascii(127): %d\nisascii(127): %d\n", ft_isascii(127), isascii(127));
	printf("ft_isascii(157): %d\nisascii(157): %d\n", ft_isascii(157), isascii(157));
	printf("ft_isascii(';'): %d\nisascii(';'): %d\n", ft_isascii(';'), isascii(';'));
	printf("ft_isascii(31): %d\nisascii(31): %d\n", ft_isascii(31), isascii(31));
	printf("ft_isascii(-31): %d\nisascii(-31): %d\n", ft_isascii(-31), isascii(-31));
}

static void		isalnum_test(void)
{
	printf("\n=== ISALNUM ===\n");
	printf("ft_isalnum('0'): %d\nisalnum('0'): %d\n", ft_isalnum('0'), isalnum('0'));
	printf("ft_isalnum('a'): %d\nisalnum('a'): %d\n", ft_isalnum('a'), isalnum('a'));
	printf("ft_isalnum('9'): %d\nisalnum('9'): %d\n", ft_isalnum('9'), isalnum('9'));
	printf("ft_isalnum(';'): %d\nisalnum(';'): %d\n", ft_isalnum(';'), isalnum(';'));
	printf("ft_isalnum(31): %d\nisalnum(31): %d\n", ft_isalnum(31), isalnum(31));
}

static void		isdigit_test(void)
{
	printf("\n=== ISDIGIT ===\n");
	printf("ft_isdigit('0'): %d\nisdigit('0'): %d\n", ft_isdigit('0'), isdigit('0'));
	printf("ft_isdigit('4'): %d\nisdigit('4'): %d\n", ft_isdigit('4'), isdigit('4'));
	printf("ft_isdigit('9'): %d\nisdigit('9'): %d\n", ft_isdigit('9'), isdigit('9'));
	printf("ft_isdigit('a'): %d\nisdigit('a'): %d\n", ft_isdigit('a'), isdigit('a'));
	printf("ft_isdigit(-8): %d\nisdigit(-8): %d\n", ft_isdigit(-8), isdigit(-8));
}

static void		isalpha_test(void)
{
	printf("\n=== ISALPHA ===\n");
	printf("ft_isalpha('a'): %d\nisalpha('a'): %d\n", ft_isalpha('a'), isalpha('a'));
	printf("ft_isalpha('G'): %d\nisalpha('G'): %d\n", ft_isalpha('G'), isalpha('G'));
	printf("ft_isalpha(';'): %d\nisalpha(';'): %d\n", ft_isalpha(';'), isalpha(';'));
	printf("ft_isalpha(8): %d\nisalpha(8): %d\n", ft_isalpha(8), isalpha(8));
	printf("ft_isalpha(-8): %d\nisalpha(-8): %d\n", ft_isalpha(-8), isalpha(-8));
}

static void		strcat_test(void)
{
	char	*s1;
	char	*s2;
	char	*ret;

	printf("\n=== STRCAT ===\n");
	s1 = (char *)malloc(sizeof(char) * 32);
	s2 = (char *)malloc(sizeof(char) * 32);

	strcpy(s1, "Hello, World!");
	strcpy(s2, " I' am here!");
	printf("s1: %s\ns2: %s\n", s1, s2);

	ret = ft_strcat(s1, s2);
	printf("ft_strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	ft_bzero(s1, 32);
	ft_bzero(s2, 32);
	strcpy(s1, "Hello, World!");
	strcpy(s2, " I' am here!");
	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = strcat(s1, s2);
	printf("strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	ft_bzero(s1, 32);
	ft_bzero(s2, 32);
	strcpy(s2, " I' am here!");
	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = ft_strcat(s1, s2);
	printf("ft_strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	ft_bzero(s1, 32);
	ft_bzero(s2, 32);
	strcpy(s2, " I' am here!");
	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = strcat(s1, s2);
	printf("strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	ft_bzero(s1, 32);
	ft_bzero(s2, 32);
	strcpy(s1, "Hello, World!");
	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = strcat(s1, s2);
	printf("strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	ft_bzero(s1, 32);
	ft_bzero(s2, 32);
	strcpy(s1, "Hello, World!");
	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = ft_strcat(s1, s2);
	printf("ft_strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);


	ft_bzero(s1, 32);
	ft_bzero(s2, 32);
	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = ft_strcat(s1, s2);
	printf("ft_strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	printf("\ns1: %s\ns2: %s\n", s1, s2);

	ret = strcat(s1, s2);
	printf("strcat(s1, s2):\ns1: %s\ns2: %s\nret: %p\n", s1, s2, ret);

	free(s1);
	free(s2);
}

static void		bzero_test(void)
{
	char	*s1;

	printf("=== BZERO ===\n");
	s1 = (char *)malloc(sizeof(char) * 16);
	strcpy(s1, "Hello, world!");

	printf("s1: %s\n", s1);

	ft_bzero(s1, 0);
	printf("ft_bzero (s1, 0): %s\n", s1);

	strcpy(s1, "Hello, world!");
	bzero(s1, 0);
	printf("bzero (s1, 0): %s\n", s1);

	strcpy(s1, "Hello, world!\n");
	ft_bzero(s1, 16);
	printf("ft_bzero(s1, 16): %s\n", s1);

	strcpy(s1, "Hello, world!\n");
	bzero(s1, 16);
	printf("bzero(s1, 16):   %s\n", s1);
}

int				main(void)
{
	bzero_test();
	strcat_test();
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	isprint_test();
	toupper_test();
	tolower_test();
	puts_test();
	strlen_test();
	memset_test();
	memcpy_test();
	strdup_test();
	islower_test();
	isupper_test();
	memchr_test();
	strcmp_test();
	strncmp_test();
}
