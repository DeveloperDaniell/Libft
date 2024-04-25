/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:48 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/25 11:13:35 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	unsigned int	len;

	len = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		i;

	buffer = ft_calloc(get_len(n) + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (n == 0)
		buffer[0] = '0';
	i = get_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		*buffer = '-';
		n *= -1;
	}
	buffer[get_len(n)] = 0;
	while (n > 0)
	{
		buffer[--i] = n % 10 + '0';
		n /= 10;
	}
	return (buffer);
}
/* void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main()
{
	int i = 0;
	char *s = ft_itoa(-2147483648LL);
	while(s[i])
	{
		printf("%c",s[i]);
		i++;
	}
} */