/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:57:04 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 12:45:07 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy
	(void *dst, const void *src, int c, size_t n)
{
	size_t shift;

	shift = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (shift < n)
	{
		((char *)dst)[shift] = ((char *)src)[shift];
		if (((char *)src)[shift] == (char)c)
			return (dst + shift + 1);
		shift++;
	}
	return (0);
}
