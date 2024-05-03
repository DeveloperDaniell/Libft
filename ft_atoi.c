/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:11:21 by djelacik          #+#    #+#             */
/*   Updated: 2024/05/02 17:16:55 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convert(const char *str, int sign)
{
	unsigned long long	ans;

	ans = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (ans > LLONG_MAX / 10 || (ans == LLONG_MAX / 10 && *str - '0' > 7))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		ans = ans * 10 + *str - '0';
		str++;
	}
	return (ans * sign);
}

int	ft_atoi(const char *str)
{
	int			sign;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (ft_convert(str, sign));
}
/* #include <stdio.h>
int main()
{
	char s[] = "	-2147483649abcd";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	
}
//2147483647, -2147483648 */