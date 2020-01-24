/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:38:29 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 13:14:19 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t shift;

	shift = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (shift < n)
	{
		((char *)dst)[shift] = ((char *)src)[shift];
		shift++;
	}
	return (dst);
}
