/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-vi <fjose-vi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:33:15 by fjose-vi          #+#    #+#             */
/*   Updated: 2022/01/08 13:33:18 by fjose-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}
