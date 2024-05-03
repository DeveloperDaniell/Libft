/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:05:23 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/30 11:14:02 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main()
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	new = malloc(sizeof(t_list));
	if (!new)
		return (1);
	new->content = "42";
	new->next = NULL;
	ft_lstadd_front(&head, new);

	if (head != NULL)
		printf("Content of first node is: %s\n", (char*)head->content);
	return (0);
	
} */
//atoi, calloc, count x size < max size