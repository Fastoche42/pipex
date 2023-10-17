/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fl-hote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:23:47 by fl-hote           #+#    #+#             */
/*   Updated: 2022/10/02 17:23:49 by fl-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc (nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
