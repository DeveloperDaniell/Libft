/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:57:35 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/25 15:03:51 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;
	size_t	total;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	if (total == 0)
		return (NULL);
	buffer = malloc(total);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, total);
	return (buffer);
}

/* #include <stdio.h>
int main()
{
	printf("%s\n", ft_calloc(0, 0));
	//printf("%s\n", calloc(0, 0));
}  */