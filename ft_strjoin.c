/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:00:20 by ysonmez           #+#    #+#             */
/*   Updated: 2021/08/03 20:19:33 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;
	char	*s;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!s)
		return (NULL);
	while (i < s1len)
	{
		s[i] = s1[i];
		i++;
	}
	while (j < s2len)
		s[i++] = s2[j++];
	s[i] = 0;
	return (s);
}
