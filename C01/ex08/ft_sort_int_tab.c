/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 01:10:12 by code-redwan       #+#    #+#             */
/*   Updated: 2026/10/28 01:27:32 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (*(tab + i) > *(tab + (i + 1)))
		{
			temp = *(tab + i);
			*(tab + i) = *(tab + (i + 1));
			*(tab + (i + 1)) = temp;
			i = 0;
		}
		else
			i++;
	}
}
