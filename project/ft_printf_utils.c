/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 00:32:21 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/30 00:39:29 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			min(int num1, int num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

int			max(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

int			count_digit(int num)
{
	int ret;

	ret = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 10;
		ret++;
	}
	return (ret);
}

int			is_negative(int num)
{
	if (num < 0)
		return (1);
	return (0);
}

const char	*normal_print(t_info *info, const char *format)
{
	if (write(1, format, 1) == -1)
	{
		info->print_count = -1;
	}
	else
	{
		info->print_count += 1;
		format++;
	}
	return (format);
}
