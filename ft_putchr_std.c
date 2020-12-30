/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchr_std.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 12:52:50 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/26 11:27:17 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchr_std(char c, t_info *info)
{
	if (write(1, &c, 1) < 0)
		info->print_count = -1;
	else
		info->print_count += 1;
}
