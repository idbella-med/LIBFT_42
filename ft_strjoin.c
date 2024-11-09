/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:04:16 by mohidbel          #+#    #+#             */
/*   Updated: 2024/11/04 11:24:12 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alls;
	int		maxlen;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = 0;
	maxlen = ft_strlen(s1) + ft_strlen(s2);
	alls = malloc((maxlen + 1) * (sizeof(char)));
	if (alls == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		alls[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		alls[j + i] = s2[i];
		i++;
	}
	alls[j + i] = '\0';
	return (alls);
}
