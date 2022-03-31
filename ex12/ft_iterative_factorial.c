/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:36:22 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 21:22:35 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb > 12)
		return (0);
	if (nb > 0)
	{
		while (nb > 0)
		{
			a *= nb;
			nb--;
		}
	}
	else if (nb < 0)
		return (0);
	return (a);
}
