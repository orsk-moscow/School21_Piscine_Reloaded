/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 09:35:28 by klekisha          #+#    #+#             */
/*   Updated: 2019/04/07 09:38:49 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*temp;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char*)(malloc(sizeof(*src) * i));
	if (!dest)
		return (NULL);
	temp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
