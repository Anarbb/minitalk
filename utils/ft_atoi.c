/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anas <aarbaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:11:32 by anas              #+#    #+#             */
/*   Updated: 2022/11/20 12:19:52 by anas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\v' || c == '\t'
		|| c == '\r' || c == '\f' || c == '\n');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * neg);
}
