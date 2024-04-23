/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:45:22 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/23 10:57:03 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count(char const *s, char c)
{
	size_t word_count = 0;
	int in_word = 0;

	while (*s)
    {
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		else if (*s == c && in_word == 1)
			in_word = 0;
		s++;
	}
	return word_count;
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
		//printf("This is the 1. index: %c\n", s[0]);
		s++;

	}
	lst[i++] = ft_substr(s - word_len, 0, word_len);
	lst[i] = 0;
	return (lst);
}
int main()
{
	char s[] = "    This      is   a      test    string    ";
	char **strings = ft_split(s,' ');
	int i = 0;
	while(strings[i])
	{
		printf("%s[%i]\n",strings[i], i);
		i++;
	}
}