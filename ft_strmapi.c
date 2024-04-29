/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:28:31 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/29 10:43:35 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	unsigned int	i;

	if (!s || !f)
		return (0);
	buffer = ft_strdup(s);
	if (!buffer)
		return (NULL);
	i = 0;
	while (buffer[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	return (buffer);
}
/* static char	ft_toup(unsigned int x, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
int main()
{
	char s[] = "This is a test string";
	printf("%s\n", ft_strmapi(s, ft_toup));
} */