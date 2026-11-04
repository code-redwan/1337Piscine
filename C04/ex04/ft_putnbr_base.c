/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 20:41:41 by code-redwan       #+#    #+#             */
/*   Updated: 2026/11/04 21:34:01 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	check_base(char *base)
{
	int	current;
	int	x_current;

	current = 0;
	while (*(base + current))
	{
		if (*(base + current) == '+' || *(base + current) == '-')
			return (0);
		x_current = current + 1;
		while (*(base + x_current))
		{
			if (*(base + current) == *(base + x_current))
				return (0);
			x_current++;
		}
		current++;
	}
	if (current < 2)
		return (0);
	return (current);
}

static void	ft_putnbr(long nb, int len, char *base)
{
	char	digit;

	if (nb >= len)
		ft_putnbr((long)nb / len, len, base);
	digit = base[nb % len];
	write(1, &digit, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	len = check_base(base);
	if (len == 0)
		return ;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	ft_putnbr(nb, len, base);
}
