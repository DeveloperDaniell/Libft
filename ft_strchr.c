/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:59:19 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/22 16:05:53 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
/* int main()
{
	char s[] = "  This is a test  string  ";
	char **strings = ft_split(s,' ');
	int i = 0;

	while(i < 5)
	{
		printf("'%s',",strings[i]);
		i++;
	}
} */