/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 23:29:02 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 21:11:06 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar2(n);
		n++;
	}
}
