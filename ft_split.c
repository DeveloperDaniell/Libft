/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:45:22 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/22 17:19:04 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	unsigned int	word_count;
	unsigned int	i;
	

	word_count = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
 		if (s[i] == c && s[i + 1] != c )
			word_count++;
		i++;
	}
	printf("word_count:%d\n", word_count);
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_len;
	size_t	i;
	char	**lst;

	if (!s)
		return (0);
	lst = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (0);
	i = 0;
	word_len = 0;
	while (*s)
	{
		if (*s != c && *s)
			word_len++;
		if (*s == c && word_len > 0)
		{
			printf("|%s| and %i\n", (s - word_len), (int)word_len);
			lst[i++] = ft_substr(s - word_len, 0, word_len);
			word_len = 0;
		}
		s++;
	}
	lst[i++] = ft_substr(s - word_len, 0, word_len);
	lst[i] = 0;
	return (lst);
}
int main()
{
	char s[] = "      This      is       no      an     ccc  ";
	char **strings = ft_split(s,' ');
	int i = 0;
	printf("%s\n", strings[3]);
	while(strings[i])
	{
		printf("%s[%i]\n",strings[i], i);
		i++;
	}
}
/* 		if (s[i] == c && s[i + 1] != c && i < ft_strlen(s))
			word_count++;
		i++; */