/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:26:42 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/14 15:06:14 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *r;

	if (min >= max)
		return (NULL);
	r = (int *)malloc(sizeof(r) * (max - min));
	i = -1;
	while (i++ < (max - min) - 1)
		r[i] = min + i;
	r[i] = '\0';
	return (r);
}
