/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:28:53 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/26 17:36:20 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = "Kartik";
	new_node->next = NULL;
	return (new_node);
}
/* int main()
{
	t_list *head;
	head = malloc(sizeof(t_list));
	head = ft_lstnew("Hello");
	printf("%s",head->content);
	//printf("%s",(char *)head->next);
} */