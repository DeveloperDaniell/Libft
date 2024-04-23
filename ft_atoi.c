/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:11:21 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/18 17:44:50 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	ans;

	sign = 1;
	ans = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + *str - '0';
		str++;
	}
	return (ans * sign);
}
/* #include <stdio.h>
int main()
{
	char s[] = "	-1234abcd";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	
} */