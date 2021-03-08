/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 22:55:56 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/30 00:04:55 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ptr_writer(uintptr_t num, char *hex, t_info *info)
{
	if (num == 0)
		return ;
	ptr_writer(num / 16, hex, info);
	if (write(1, &hex[num % 16], 1) < 0)
		info->print_count = -1;
	else
		info->print_count += 1;
}

void	ptr_counter(uintptr_t num, char *hex, int *cnt)
{
	if (num == 0)
		return ;
	ptr_counter(num / 16, hex, cnt);
	*cnt += 1;
}

void	put_ptr_std(uintptr_t num, t_info *info)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num == 0)
		ft_putnbr_std(num, info);
	else
		ptr_writer(num, hex, info);
}

int		check_ptr_len(uintptr_t num)
{
	char	*hex;
	int		cnt;

	cnt = 0;
	hex = "0123456789abcdef";
	if (num == 0)
		cnt = 1;
	else
		ptr_counter(num, hex, &cnt);
	return (cnt);
}
