/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:14:35 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/21 17:34:08 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>

/*
**	Flags width precision length checks
*/

typedef struct		s_print
{
	int				f_m;
	int				f_p;
	int				f_s;
	int				f_h;
	int				f_z;
	int				w_n;
	int				p_n;
	int				s_l;
}					t_print;

typedef void		t_fwpl(char *str, t_print **t);

void				flag_check(char *str, t_print **t);
void				width_check(char *str, t_print **t);
void				precision_check(char *str, t_print **t);
void				length_check(char *str, t_print **t);

static t_fwpl		*g_fwpl[] =
{
	flag_check,
	width_check,
	precision_check,
	length_check
};

/*
**	Specifiers check
*/

typedef int			t_specifier(va_list av, t_print *t);

int					c_spec(va_list av, t_print *t);
int					s_spec(va_list av, t_print *t);
int					p_spec(va_list av, t_print *t);
int					di_spec(va_list av, t_print *t);
int					o_spec(va_list av, t_print *t);
int					u_spec(va_list av, t_print *t);
int					x_spec(va_list av, t_print *t);
int					xl_spec(va_list av, t_print *t);
int					f_spec(va_list av, t_print *t);
int					pr_spec(va_list av, t_print *t);

/*
**	Second 'd_spec' is for 'i' specifier. Because 'i' specifier acts in the
**	same way as 'd' specifier.
*/

static t_specifier	*g_f_table[] =
{
	c_spec,
	s_spec,
	p_spec,
	di_spec,
	di_spec,
	o_spec,
	u_spec,
	x_spec,
	xl_spec,
	f_spec,
	pr_spec
};

/*
**	General functions
*/

int					ft_printf(const char *str, ...);

/*
**	Structure functions
*/

t_print				*new_str(void);
int					reset_str(t_print **t);
void				delete_str(t_print **t);

/*
**	Additional functions
*/

long double			ft_pow_ui(int ap);
int					ft_numlen_im(intmax_t nbr);
int					ft_numlen_uim(uintmax_t nbr);
int					ft_putaddress(uintmax_t value);
int					ft_numlen_base(uintmax_t nb, int base);
int					ft_putd(long double n, int ap, t_print *t, char sp);
int					ft_putd_l(long double n, int ap, t_print *t, char sp);
int					ft_putnbr_base(uintmax_t value, int base, int xl);
int					end_it_pls(va_list av, t_print **t, int numb);
void				get_fwpl(char *str, t_print **t);
void				ft_ls_di(intmax_t *nbr, t_print *t, va_list av);
void				ft_ls_d(long double *nbr, t_print *t, va_list av);
void				ft_ls_uox(uintmax_t *nbr, t_print *t, va_list av);
void				ft_putnbr_im(intmax_t nbr);
void				ft_putnbr_uim(uintmax_t nbr);
void				p_av25(t_print *t, char sp, int pc);
void				f_av25(t_print *t, char sp, long double *nbr);
void				di_av25(t_print *t, char sp, intmax_t *nbr, int l);
void				u_av25(t_print *t, char sp, uintmax_t *nbr, int *l);
void				o_av25(t_print *t, char sp, uintmax_t *nbr, int *l);
void				x_av25(t_print *t, char sp, uintmax_t *nbr, int *l);
void				get_started(int *c, t_print **t);

#endif
