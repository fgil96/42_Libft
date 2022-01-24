/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-vi <fjose-vi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:38:07 by fjose-vi          #+#    #+#             */
/*   Updated: 2022/01/08 13:38:09 by fjose-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	char	*dest;

	dest = (char *)str;
	while (0 < count)
	{
		dest[count - 1] = c;
		count--;
	}
	return (str);
}
