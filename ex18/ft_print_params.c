/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:10:17 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 21:11:44 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char n)
{
	write(1, &n, 1);
}

int	main(int argc, char *argv[])
{
	int	counter;
	int	counter2;

	counter = 1;
	if (argc == 1)
		return (0);
	while (counter < argc)
	{
		counter2 = 0;
		while (argv[counter][counter2])
		{
			ft_putchar2(argv[counter][counter2]);
			counter2++;
		}
		counter++;
		ft_putchar2('\n');
	}
}
