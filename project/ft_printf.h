/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 22:59:20 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/31 13:53:40 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

typedef	struct	s_info
{
	int		negative_flag;
	int		zero_flag;
	int		min_width;
	int		precision;
	char	conversion;
	int		print_count;
}				t_info;

int				ft_printf(const char *format, ...);
const char		*set_info(const char *format, va_list list, t_info *info);
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
void			ft_putchr_std(char c, t_info *info);
void			ft_putstr_std(char *s, int max, t_info *info);
void			ft_putnbr_std(int n, t_info *info);
void			put_hex_std(unsigned int num, t_info *info);
void			put_ptr_std(uintptr_t num, t_info *info);
int				check_ptr_len(uintptr_t num);
int				check_hex_len(unsigned int num, t_info *info);
void			ft_putsame_std(char c, int num1, int num2, t_info *info);
int				ft_isdigit(int c);
int				ft_atoi(const char *str);
const char		*normal_print(t_info *info, const char *format);
void			print_c(va_list list, t_info *info, const char *format);
void			print_s(va_list list, t_info *info);
void			print_ux(va_list list, t_info *info);
void			print_p(va_list list, t_info *info);
void			print_di(va_list list, t_info *info);
int				min(int num1, int num2);
int				max(int num1, int num2);
int				is_negative(int num);
int				count_digit(int num);

#endif
