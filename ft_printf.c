/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 23:47:57 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/30 00:38:45 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		info_init(t_info *info)
{
	info->negative_flag = 0;
	info->zero_flag = 0;
	info->min_width = -1;
	info->precision = -1;
	info->conversion = 'n';
}

void		put_info(va_list list, t_info *info, const char *format)
{
	if (ft_strchr("s", info->conversion))
		print_s(list, info);
	else if (ft_strchr("p", info->conversion))
		print_p(list, info);
	else if (ft_strchr("di", info->conversion))
		print_di(list, info);
	else if (ft_strchr("uxX", info->conversion))
		print_ux(list, info);
	else
		print_c(list, info, format);
}

const char	*converted_print(const char *format, va_list list, t_info *info)
{
	format = set_info(format, list, info);
	put_info(list, info, format);
	if (*format != '\0')
		format++;
	return (format);
}

int			ft_printf(const char *format, ...)
{
	va_list	list;
	t_info	info;

	va_start(list, format);
	info.print_count = 0;
	while (*format && info.print_count != -1)
	{
		info_init(&info);
		if (*format == '%')
			format = converted_print(format, list, &info);
		else
			format = normal_print(&info, format);
	}
	va_end(list);
	return (info.print_count);
}
