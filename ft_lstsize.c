/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:28:56 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/28 20:15:26 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* int main()
{
	t_list	*head;
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return 1;
	new->content = "First node";
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

	t_list *current = head;
	while(current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("%d\n", ft_lstsize(head));
} */