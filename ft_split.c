/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:45:22 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/24 16:14:04 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		word_len;
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = -1;
	j = 0;
	word_len = 0;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
			word_len++;
		else if ((s[i] == c || i == ft_strlen(s)) && word_len > 0)
		{
			split[j++] = ft_substr(&s[i - word_len], 0, word_len);
			word_len = 0;
		}
	}
	split[j] = 0;
	return (split);
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
	char	**tabstr;
	int		i;
	i = 0;

		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, 
		consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
} */