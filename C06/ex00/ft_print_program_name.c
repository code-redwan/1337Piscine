/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:51:08 by code-redwan       #+#    #+#             */
/*   Updated: 2026/11/01 15:04:15 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(const char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
