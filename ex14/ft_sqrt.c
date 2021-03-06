/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 18:58:39 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/02 19:40:58 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0 || nb > 2147395600)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i > nb)
		return (0);
	if (i * i == nb)
		return (i);
	if (i > 46340)
		return (0);
	else
		return (0);
}
