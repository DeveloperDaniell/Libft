/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:57:35 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/19 10:12:12 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(count * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, count);
	return (buffer);
}

