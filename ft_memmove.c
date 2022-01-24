/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-vi <fjose-vi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:37:36 by fjose-vi          #+#    #+#             */
/*   Updated: 2022/01/08 13:37:39 by fjose-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t counter)
{
	size_t			i;
	unsigned char	*strdest;
	unsigned char	*strsrc;

	strdest = (unsigned char *)dest;
	strsrc = (unsigned char *)src;
	i = 0;
	if (!strdest && !strsrc)
		return (NULL);
	if (strdest > strsrc)
	{
		counter++;
		while (--counter > 0)
			(strdest)[counter - 1] = (strsrc)[counter - 1];
	}
	else
	{
		while (i < counter)
		{
			(strdest)[i] = (strsrc)[i];
			i++;
		}
	}
	return (dest);
}
