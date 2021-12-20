/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:02:50 by ccoto             #+#    #+#             */
/*   Updated: 2020/11/25 10:56:10 by ccoto            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(dst = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len && start <= ft_strlen(s))
	{
		dst[i] = s[start];
		start++;
		i++;
		len--;
	}
	dst[i] = 0;
	return (dst);
}
