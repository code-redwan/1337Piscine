/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code-redwan <code-redwan@proton.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 22:11:36 by code-redwan       #+#    #+#             */
/*   Updated: 2026/10/28 22:13:44 by code-redwan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	index;

	index = 0;
	while (*(src + index))
	{
		*(dest + index) = *(src + index);
		index++;
	}
	return (dest);
}
