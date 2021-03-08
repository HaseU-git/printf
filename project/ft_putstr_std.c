/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_std.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:06:49 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/29 23:27:48 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_std(char *s, int max, t_info *info)
{
	while (*s != '\0' && max)
	{
		if (write(1, s, 1) < 0)
		{
			info->print_count = -1;
			break ;
		}
		else
			info->print_count += 1;
		s++;
		max--;
	}
}
