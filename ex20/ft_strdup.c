/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:50:53 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/30 20:05:46 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen2(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		counter;

	cpy = (char *) malloc((sizeof(char) * ft_strlen2(src)) + 1);
	counter = 0;
	while (src[counter])
	{
		cpy[counter] = src[counter];
		counter++;
	}
	return (cpy);
}
