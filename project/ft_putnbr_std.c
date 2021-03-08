/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_std.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:19:24 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/29 23:14:52 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_itoc(unsigned int temp, t_info *info)
{
	char	c;

	if (temp == 0)
		return ;
	c = (temp % 10) + '0';
	ft_itoc(temp / 10, info);
	ft_putchr_std(c, info);
}

void		ft_putnbr_std(int n, t_info *info)
{
	unsigned int temp;

	if (n == 0)
		ft_putchr_std('0', info);
	if (n < 0)
		temp = (unsigned int)-n;
	else
		temp = (unsigned int)n;
	ft_itoc(temp, info);
}
