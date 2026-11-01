/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:08:55 by code-redwan       #+#    #+#             */
/*   Updated: 2026/11/01 15:22:23 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
