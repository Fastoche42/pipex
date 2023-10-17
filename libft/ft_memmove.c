/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fl-hote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:27:38 by fl-hote           #+#    #+#             */
/*   Updated: 2022/10/02 17:27:39 by fl-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*str_dest;
	char			*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;
	if (str_dest > str_src)
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	else if (str_dest < str_src)
		ft_memcpy(dest, src, n);
	return (dest);
}
