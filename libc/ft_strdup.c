/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:06:06 by haltall           #+#    #+#             */
/*   Updated: 2018/10/26 13:06:08 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	char	*n;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	n = (char *)malloc(sizeof(char) * (len + 1));
	if (n == '\0')
		return (NULL);
	while (s[i])
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
