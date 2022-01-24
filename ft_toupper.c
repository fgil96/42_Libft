/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-vi <fjose-vi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:37:44 by fjose-vi          #+#    #+#             */
/*   Updated: 2022/01/24 16:37:55 by fjose-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (arg - 32);
	return (arg);
}
