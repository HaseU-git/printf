/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 22:58:01 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/29 23:32:40 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*hex_init(char c)
{
	char *ret;

	if (c == 'X')
		ret = "0123456789ABCDEF";
	else
		ret = "0123456789abcdef";
	return (ret);
}

void	hex_writer(unsigned int num, char *hex, t_info *info)
{
	int base;

	if (info->conversion == 'u')
		base = 10;
	else
		base = 16;
	if (num == 0)
		return ;
	hex_writer(num / base, hex, info);
	if (write(1, &hex[num % base], 1) < 0)
		info->print_count = -1;
	else
		info->print_count += 1;
}

void	hex_counter(unsigned int num, char *hex, int base, int *cnt)
{
	if (num == 0)
		return ;
	hex_counter(num / base, hex, base, cnt);
	*cnt += 1;
}

void	put_hex_std(unsigned int num, t_info *info)
{
	char	*hex;

	hex = hex_init(info->conversion);
	if (num == 0)
		ft_putnbr_std(num, info);
	else
		hex_writer(num, hex, info);
}

int		check_hex_len(unsigned int num, t_info *info)
{
	char	*hex;
	int		cnt;
	int		base;

	if (info->conversion == 'u')
		base = 10;
	else
		base = 16;
	cnt = 0;
	hex = hex_init(info->conversion);
	if (num == 0)
		cnt = 1;
	else
		hex_counter(num, hex, base, &cnt);
	return (cnt);
}
