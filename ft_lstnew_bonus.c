/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:38:42 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/21 11:16:27 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(struct s_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main(void)
// {
// 	t_list *Francis;
// 	t_list *Patrick;
// 	t_list *Rene;
// 	t_list *bagarre;

// 	Francis = ft_lstnew("Francis");
// 	Patrick = ft_lstnew("Patrick");
// 	Rene = ft_lstnew("Renai");
// 	bagarre = ft_lstnew("bagarre");
// 	ft_lstadd_front(&Francis, Patrick);
// 	ft_lstadd_front(&Francis, Rene);
// 	ft_lstadd_back(&Francis, bagarre);

// 	while (Francis)
// 	{
// 		puts(Francis->content);
// 		Francis = Francis->next;
// 	}
// }