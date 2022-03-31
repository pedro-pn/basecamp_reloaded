/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 23:38:12 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 21:11:18 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char x)
{
	write(1, &x, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar2('N');
	else
		ft_putchar2('P');
}
