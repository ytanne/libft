/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:00:51 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/03 14:08:52 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include "libft_struct.h"
# include "libft_string.h"

void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *d, const void *s, int c, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_atoi(char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_itoa(int n);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
char					*ft_strncat(char *s1, const char *s2, size_t n);
unsigned long long int	ft_pow(int nbr, int power);
void					ft_print_bits(unsigned char octet);

#endif
