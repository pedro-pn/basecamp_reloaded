/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:23:02 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/28 16:37:43 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	counter;

	counter = 0;
	while (counter < length)
	{
		(*f)(tab[counter]);
		counter++;
	}
}
