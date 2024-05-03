/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:09:02 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/29 14:32:31 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/* void	nothing(void * test)
{
	if (test)
		return free(test);
}

int main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*current;

	node1 = malloc(sizeof(t_list));
	if (!node1)
		return 1;
	node1->content = ft_strdup("First");
	node1->next = NULL;
	head = node1;

	node2 = malloc(sizeof(t_list));
    if (node2 == NULL)
        return 1;
    node2->content = "Second";
    node2->next = NULL;
    head->next = node2;

	node3 = malloc(sizeof(t_list));
    if (node3 == NULL)
        return 1;
    node3->content = "Third";
    node3->next = NULL;
    head->next->next = node3;

	
	current = head;
	//ft_lstdelone(node1, &nothing);
 	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
} */