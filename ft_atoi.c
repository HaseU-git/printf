/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 17:14:34 by yhasegaw          #+#    #+#             */
/*   Updated: 2020/12/26 08:21:04 by yhasegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	ret;

	i = 0;
	ret = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i++] - '0';
		if (ret > LONG_MAX && sign == 1)
			return (-1);
		else if (ret > (unsigned long)LONG_MAX + 1 && sign == -1)
			return (0);
	}
	return (sign * (int)ret);
}
