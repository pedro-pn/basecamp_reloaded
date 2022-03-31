/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:48:20 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 21:23:50 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
	{
		return (0);
	}	
	if (nb > 1)
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	else if (nb < 0)
		return (0);
	return (1);
}
