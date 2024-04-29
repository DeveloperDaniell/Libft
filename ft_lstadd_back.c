/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:09:20 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/29 15:32:03 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

/* int main()
{
	t_list	*head = NULL;
	t_list	*new;
	t_list	*new_test;


	new = malloc(sizeof(t_list));
	if (!new)
		return 1;
	new->content = "First node";
	new->next = NULL;
	ft_lstadd_back(&head, new);
	
	new = malloc(sizeof(t_list));
    if (new == NULL)
        return 1;
    new->content = "Second";
    new->next = NULL;
    ft_lstadd_back(&head, new);

	new = malloc(sizeof(t_list));
    if (new == NULL)
        return 1;
    new->content = "Third";
    new->next = NULL;
    ft_lstadd_back(&head, new);

	new_test = malloc(sizeof(t_list));
	if (!new_test)
		return 1;
	new_test->content = "Test node";
	new_test->next = NULL;
	ft_lstadd_back(&head, new_test);
	
	t_list *current = head;
	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
} */