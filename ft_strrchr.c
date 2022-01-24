/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-vi <fjose-vi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:19:22 by fjose-vi          #+#    #+#             */
/*   Updated: 2022/01/24 16:20:12 by fjose-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	size;

	size = ft_strlen((char *)str);
	while (str[size] != (char)c && size != 0)
	{
		size--;
	}
	if (str[size] == (char)c)
		return ((char *)&str[size]);
	return (NULL);
}
