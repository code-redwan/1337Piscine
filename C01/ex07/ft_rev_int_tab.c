/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:48:45 by code-redwan       #+#    #+#             */
/*   Updated: 2026/10/28 01:09:40 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size = size - 1;
	while (i <= (size / 2))
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + (size - i));
		*(tab + (size - i)) = temp;
		i++;
	}
}
