/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 01:21:39 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 01:42:23 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 1;
	while (counter < 46341 && counter <= (nb / 2) + 1)
	{
		if (counter * counter == nb)
			return (counter);
		counter++;
	}
	return (0);
}
