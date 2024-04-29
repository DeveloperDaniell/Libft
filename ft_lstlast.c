/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:13:08 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/29 14:32:34 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* int main()
{
	t_list	*head;
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return 1;
	new->content = "First";
	new->next = NULL;
	head = new;

	new = malloc(sizeof(t_list));
    if (new == NULL)
        return 1;
    new->content = "Second";
    new->next = NULL;
    head->next = new;

	new = malloc(sizeof(t_list));
    if (new == NULL)
        return 1;
    new->content = "Third";
    new->next = NULL;
    head->next->next = new;

	t_list *last = ft_lstlast(head);
 	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("Last node's content: %s\n", (char *)last->content);
} */