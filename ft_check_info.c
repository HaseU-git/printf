/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 00:07:16 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/30 00:13:07 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*check_flag(t_info *info, const char *format)
{
	char *flags;
	char *temp;

	flags = "0-";
	while ((temp = ft_strchr(flags, *format)))
	{
		if (*temp == '0')
			info->zero_flag = 1;
		else if (*temp == '-')
			info->negative_flag = 1;
		format++;
	}
	return (format);
}

const char	*check_min_width(const char *format, va_list list, t_info *info)
{
	if (*format == '*')
	{
		info->min_width = va_arg(list, int);
		if (info->min_width < 0)
		{
			info->negative_flag = 1;
			info->min_width *= -1;
		}
		return (++format);
	}
	info->min_width = ft_atoi(format);
	while (ft_isdigit(*format))
		format++;
	return (format);
}

const char	*check_precision(const char *format, va_list list, t_info *info)
{
	if (*format != '.')
	{
		info->precision = -1;
		return (format);
	}
	format++;
	if (*format == '*')
	{
		info->precision = va_arg(list, int);
		if (info->precision < 0)
			info->precision = -1;
		return (++format);
	}
	info->precision = ft_atoi(format);
	while (ft_isdigit(*format))
		format++;
	return (format);
}

const char	*check_conversion(t_info *info, const char *format)
{
	if (ft_strchr("cspdiuxX%", *format))
		info->conversion = *format;
	return (format);
}

const char	*set_info(const char *format, va_list list, t_info *info)
{
	format += 1;
	format = check_flag(info, format);
	format = check_min_width(format, list, info);
	format = check_precision(format, list, info);
	format = check_conversion(info, format);
	return (format);
}
