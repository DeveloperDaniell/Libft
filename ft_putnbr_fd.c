/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:09:48 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/25 11:18:58 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	x;

	if (n == -2147483648)
	{
		write(fd, "-21", 3);
		n = 47483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		x = n + '0';
		write(fd, &x, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		x = (n % 10) + '0';
		write(fd, &x, 1);
	}
}
/* int main()
{
	ft_putnbr_fd(-57, 2);
} */