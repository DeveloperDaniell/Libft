/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djelacik <djelacik@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:52 by djelacik          #+#    #+#             */
/*   Updated: 2024/04/23 11:25:18 by djelacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	char	*p;

	if (!s || !len)
		return (NULL);
	if (len > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	p = buffer;
	while (*s && len--)
	{
		*buffer++ = *s++ + start;
	}
	*buffer++ = 0;
	return (p);
}
/* #include <stdio.h>
int main()
{
	char s1[] = "";

	printf("%s\n", ft_substr(s1, 1, 1));
} */

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t word_start = 0;
    int in_word = 0;
    char **lst = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));

    if (!lst)
        return (NULL);
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            word_start = s - s;
        }
        else if (*s == c && in_word == 1)
        {
            lst[i++] = ft_substr(s - word_start, 0, s - (s - word_start));
            in_word = 0;
        }
        s++;
    }
    if (in_word)
        lst[i++] = ft_substr(s - word_start, 0, s - (s - word_start));
    lst[i] = NULL;
    return lst;
}