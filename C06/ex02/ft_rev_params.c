/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:15:48 by code-redwan       #+#    #+#             */
/*   Updated: 2026/11/01 15:21:13 by code-redwan      ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	argc = argc - 1;
	while (argc > 0)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
