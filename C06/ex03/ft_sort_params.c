/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:23:10 by code-redwan       #+#    #+#             */
/*   Updated: 2026/11/01 21:58:14 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

static void	ft_putstr(const char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*string;

	i = 1;
	while (i < (argc - 1))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			string = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = string;
			i = 0;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
