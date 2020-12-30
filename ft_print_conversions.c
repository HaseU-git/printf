/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 00:15:30 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/30 00:27:36 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(va_list list, t_info *info, const char *format)
{
	int	c;

	if (info->conversion == 'c')
		c = va_arg(list, int);
	else
		c = *format;
	if (!info->negative_flag && !info->zero_flag)
		ft_putsame_std(' ', info->min_width, 1, info);
	if (!info->negative_flag && info->zero_flag)
		ft_putsame_std('0', info->min_width, 1, info);
	if (info->print_count != -1 && info->min_width < INT_MAX)
		ft_putchr_std(c, info);
	if (info->negative_flag)
		ft_putsame_std(' ', info->min_width, 1, info);
}

void	print_s(va_list list, t_info *info)
{
	char	*s;
	int		visible_len;

	s = va_arg(list, char*);
	if (s == NULL)
		s = "(null)";
	visible_len = ft_strlen(s);
	if (info->precision != -1)
		visible_len = min(visible_len, info->precision);
	if (!info->negative_flag && !info->zero_flag)
		ft_putsame_std(' ', info->min_width, visible_len, info);
	if (!info->negative_flag && info->zero_flag)
		ft_putsame_std('0', info->min_width, visible_len, info);
	if (info->print_count != -1 && info->min_width < INT_MAX)
		ft_putstr_std(s, visible_len, info);
	if (info->negative_flag)
		ft_putsame_std(' ', info->min_width, visible_len, info);
}

void	print_ux(va_list list, t_info *info)
{
	unsigned int	x;
	int				visible_len;

	x = va_arg(list, unsigned int);
	visible_len = check_hex_len(x, info);
	if (info->precision == 0 && x == 0)
		visible_len = 0;
	if (info->precision != -1)
		visible_len = max(visible_len, info->precision);
	if ((!info->negative_flag && !info->zero_flag)
	|| (!info->negative_flag && info->precision >= 0))
		ft_putsame_std(' ', info->min_width, visible_len, info);
	if (!info->negative_flag && info->zero_flag && info->precision == -1)
		ft_putsame_std('0', info->min_width, visible_len, info);
	if (info->precision > 0)
		ft_putsame_std('0', visible_len, check_hex_len(x, info), info);
	if (!(info->precision == 0 && x == 0) && info->min_width < INT_MAX)
		put_hex_std(x, info);
	if (info->negative_flag)
		ft_putsame_std(' ', info->min_width, visible_len, info);
}

void	print_p(va_list list, t_info *info)
{
	uintptr_t	ptr;
	int			visible_len;

	ptr = (uintptr_t)va_arg(list, void*);
	visible_len = check_ptr_len(ptr);
	if (info->precision == 0 && ptr == 0)
		visible_len = 0;
	if (info->precision != -1)
		visible_len = max(visible_len, info->precision);
	if ((!info->negative_flag && !info->zero_flag)
	|| (!info->negative_flag && info->precision >= 0))
		ft_putsame_std(' ', info->min_width, visible_len + 2, info);
	if (info->min_width < INT_MAX)
		ft_putstr_std("0x", 2, info);
	if (!info->negative_flag && info->zero_flag && info->precision == -1)
		ft_putsame_std('0', info->min_width, visible_len + 2, info);
	if (info->precision > 0)
		ft_putsame_std('0', visible_len, check_hex_len(ptr, info), info);
	if (!(info->precision == 0 && ptr == 0) && info->min_width < INT_MAX)
		put_ptr_std(ptr, info);
	if (info->negative_flag)
		ft_putsame_std(' ', info->min_width, visible_len + 2, info);
}

void	print_di(va_list list, t_info *info)
{
	int d;
	int visible_len;

	d = va_arg(list, int);
	visible_len = count_digit(d);
	if (info->precision == 0 && d == 0)
		visible_len = 0;
	if (info->precision != -1)
		visible_len = max(visible_len, info->precision);
	if ((!info->negative_flag && !info->zero_flag)
	|| (!info->negative_flag && info->precision >= 0))
		ft_putsame_std(' ', info->min_width, visible_len
	+ is_negative(d), info);
	if (d < 0 && info->print_count != -1)
		ft_putchr_std('-', info);
	if (!info->negative_flag && info->zero_flag && info->precision == -1)
		ft_putsame_std('0', info->min_width, visible_len
		+ is_negative(d), info);
	if (info->precision > 0)
		ft_putsame_std('0', visible_len, count_digit(d), info);
	if (!(info->precision == 0 && d == 0) && info->min_width < INT_MAX)
		ft_putnbr_std(d, info);
	if (info->negative_flag)
		ft_putsame_std(' ', info->min_width, visible_len
		+ is_negative(d), info);
}
