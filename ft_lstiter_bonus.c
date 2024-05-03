/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:21:54 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/29 17:44:32 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* void	print_content(void *content) {
    printf("%s\n", (char *)content);
}
int main()
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
	ft_lstiter(head, print_content);
 } */