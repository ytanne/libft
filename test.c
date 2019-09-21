/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:05:54 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/20 21:58:26 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_putchar2(char *c)
{
	write(1, c, 1);
}

int main(void)
{
	//Memloc function test
	char	s[50] = "Hello world of 42 in Silicon Valley";
	int		i;

	i = 0;
	ft_memset(s + 3, '.', 6);
	printf("Memloc: %s\n", s);

	//Bzero function test
	char	s1[50] = "Hello world of 42 in Silicon Valley";

	i = 0;
	ft_bzero(s1 + 3, 0);
	printf("Bzero: %s\n", s1);
	
	//Memcpy function test
	char	s3[50]; // = "Hello world of 42 in Silicon Valley";
	char	s2[50];
	char	s222[50];

	i = 60;
	ft_bzero(s3, 50);
	ft_bzero(s222, 50);
	printf("Memcpy spec test 1: %s\n", ft_memcpy(NULL, NULL, i));
	printf("Memcpy spec test 2: %s\n", memcpy(NULL, NULL, i));
	printf("Memcpy: %s\n", s2);
	printf("Memcpy real: %s\n", s222);

	//Memccpy function test
	char	s16[50] = "Hello world of 42 in Silicon Valley";
	char	s17[50];
	char	s18[50];

	i = 7;
	ft_memccpy(s17, s16 + 3, '4', i);
	printf("Memccpy result is: %s\n", s17);
	memccpy(s18, s16 + 3, '4', i);
	printf("Memccpy 2 result is: %s\n", s17);

	//Memmove function test
	char	s4[50] = "Hello world of 42 in Silicon Valley";
	char	s0[50];

	i = 13;
	ft_memmove(s0, s4 + 3, i);
	printf("Memmove is: %s\n", s0);
	
	//Memcmp function test
	char	s5[50] = "Hello world of 42 in Silicon Valley";
	//char	s6[50] = "Hello world of 42 in Silicon Valley";

	i = 13;
	printf("Memcmp result is: %d\n", ft_memcmp(s, s5, i));
	
	//Strlen function test
	char	s7[50] = "Hello world of 42 in Silicon Valley";

	printf("Strlen: %zu\n", ft_strlen(s7));

	//Strdup function test
	char	s8[50] = "Hello world of 42 in Silicon Valley";
	char	*s9;

	s9 = ft_strdup(s8);
	printf("Strdup: ");
	while (*s9 != '\0')
		printf("%c", *(s9)++);
	printf("\n");
	//printf("Strdup: %s\n", s9);

	//Strcpy function test
	char	s10[] = "Function are productions of beautiful mind";
	char	s11[50];

	ft_strcpy(s11, s10);
	printf("Strcpy: %s\n", s11);

	//Strncpy function test
	char	s12[] = "Function are productions of beautiful mind";
	char	s13[100] = "Before character generators were available, the p";
	char	s100[100] = "Before character generators were available, the p";

	ft_strncpy(s13, s12, 55);
	strncpy(s100, s12, 55);
	printf("Strncpy: %s\n", s13);
	printf("original strncpy: %s\n", s100);

	//Strcat function test
	char	s14[] = "Function are productions of beautiful mind";
	char	s15[100] = "Before character generators were available, the p";

	ft_strcat(s15, s14);
	printf("Strcat: %s\n", s15);

	//Strlcat function test
	char	s20[] = "Function are productions of beautiful mind";
	char	s21[100] = "Before character generators were available, the p";

	ft_strlcat(s21, s20, 30);
	printf("Strlcat: %s\n", s21);

	//Strchr function test
	char	s22[] = "Function are productions of beautiful mind";

	printf("Strchr: %s\n", ft_strchr(s22, 'u'));

	//Memchr function test
	char	s23[] = "Function are productions of beautiful mind";

	printf("Memchr: %s\n", ft_strchr(s23, 'a'));
	
	//Strchr function test
	char	s24[] = "Function are productions of beautiful mind";

	printf("Strrchr: %s\n", ft_strrchr(s24, 'u'));

	//Strstr function test
	char	s25[] = "Function are productions of beautiful mind";

	printf("Strstr: %s\n", ft_strstr(s25, ""));

	//Strstr function test
	char	s26[] = "Function are productions of beautiful mind";

	printf("Strnstr: %s\n", ft_strnstr(s26, "mind", 93));
	printf("Real strnstr: %s\n", strnstr(s26, "mind", 93));

	//Strcmp function test
	char	s27[] = "Function are productions of beautiful mind";

	printf("Strcmp: %d\n", ft_strcmp(s27, "Functions"));
	
	//Strncmp function test
	char	s28[] = "Function are productions of beautiful mind";

	printf("Strnstr: %d\n", ft_strncmp(s28, "Functions", 3));

	//Atoi function test
	//char	s29[] = "193";
	printf("Atoi: %d\n", ft_atoi("9223372036854775806"));
	printf("real atoi mf: %d\n", atoi("9223372036854775806"));

	//isalpha function test
	char	s30 = '1';
	printf("isalpha: %d\n", ft_isalpha(s30));
	printf("real isalpha: %d\n", isalpha(s30));

	//isalpha function test
	char	s31 = 'a';

	printf("isdigit: %d\n", ft_isdigit(s31));
	printf("real isdigit: %d\n", isdigit(s31));

	//isalnum function test
	char	s32 = 'a';

	printf("isalnum: %d\n", ft_isalnum(s32));
	printf("real isalnum: %d\n", isalnum(s32));
	
	//isascii function test
	char	s33 = 'a';

	printf("isascii: %d\n", ft_isascii(s33));
	printf("real isascii: %d\n", isascii(s33));

	//isprint function test
	char	s34 = 'a';

	printf("isprint: %d\n", ft_isprint(s34));
	printf("real isprint: %d\n", isprint(s34));

	//toupper function test
	printf("toupper: %c\n", ft_toupper('a'));
	printf("toupper: %c\n", ft_toupper('A'));
	printf("toupper: %c\n", ft_toupper('1'));

	//tolower function test
	printf("tolower: %c\n", ft_tolower('a'));
	printf("tolower: %c\n", ft_tolower('A'));
	printf("tolower: %c\n", ft_tolower('1'));

	//ft_memalloc function test
	char	*s35;
	s35 = ft_memalloc(10);

	//ft_striter function test
	char	s36[] = "Hello world of 42\n";
	ft_striter(s36, ft_putchar2);

	//ft_strsub function test
	char	s37[] = "School 42 is located in Silicon Valley";
	printf("ft_strsub: %s\n", ft_strsub(s37, 5, 10));

	//ft_strjoin function test
	char	s38[] = "School 42 is located in Silicon Valley";
	char	s39[] = " and you know that it is a great place!";
	printf("ft_strjoin: %s\n", ft_strjoin(s38, s39));

	//ft_strsub function test
	char	s40[] = "  \tSome random stuff that comes out of my head! \n  \t";
	printf("ft_strsub test: %s\n", ft_strtrim(s40));
	printf("real str for the test: %s\n", s40);

	//ft_strsplit function test
	char	s41[] = "hello fellow students";
	char	**s42 = ft_strsplit(s41, ' ');
	printf("%s\n", s42[1]);

	//ft_itoa function test
	printf("ft_itoa test: %s\n", ft_itoa(123));

	//ft_putnbr function test
	ft_putnbr(123);


	return (0);
}
