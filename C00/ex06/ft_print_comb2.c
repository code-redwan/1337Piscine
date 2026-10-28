/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:00:27 by code-redwan       #+#    #+#             */
/*   Updated: 2026/10/28 00:24:12 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_dm(int number)
{
	char	o;

	o = (number / 10) + '0';
	write(1, &o, 1);
	o = (number % 10) + '0';
	write(1, &o, 1);
}

void	ft_print_comb(int primary, int secondary)
{
	ft_dm(primary);
	write(1, " ", 1);
	ft_dm(secondary);
	if (!(primary == 98 && secondary == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	primary;
	int	secondary;

	primary = 0;
	while (primary <= 98)
	{
		secondary = primary + 1;
		while (secondary <= 99)
		{
			ft_print_comb(primary, secondary);
			secondary++;
		}
		primary++;
	}
}
