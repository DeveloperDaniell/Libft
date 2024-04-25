/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:40:18 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/24 09:47:31 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
/* int main()
{
	char s[] = "This is a test string";
	int i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], 2);
		i++;
	}
} */