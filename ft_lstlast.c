# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_lstlast,c                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjose-vi <fjose-vi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 13:55:16 by fjose-vi          #+#    #+#              #
#    Updated: 2022/01/08 13:55:22 by fjose-vi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}