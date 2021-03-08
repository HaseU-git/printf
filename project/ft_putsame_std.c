/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsame_std.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 23:16:28 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/29 23:19:04 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putsame_std(char c, int num1, int num2, t_info *info)
{
	int num;

	if (num1 >= INT_MAX)
	{
		info->print_count = -1;
		return ;
	}
	num = num1 - num2;
	while (num > 0)
	{
		if (write(1, &c, 1) < 0)
		{
			info->print_count = -1;
			break ;
		}
		else
			info->print_count += 1;
		num--;
	}
}
