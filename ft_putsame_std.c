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

void	ft_putsame_std(char c, int num, t_info *info)
{
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
