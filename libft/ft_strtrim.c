/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fl-hote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:30:56 by fl-hote           #+#    #+#             */
/*   Updated: 2022/10/02 17:30:59 by fl-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*tab;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	tab = ft_substr((char *)s1, 0, len + 1);
	return (tab);
}
