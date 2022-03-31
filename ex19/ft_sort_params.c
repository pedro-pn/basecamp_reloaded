/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:29:12 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/30 19:33:44 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	diff;

	counter = 0;
	diff = 0;
	while (diff == 0)
	{	
		diff = s1[counter] - s2[counter];
		counter++;
	}
	return (diff);
}

void	ft_putchar2(char n)
{
	write(1, &n, 1);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort(char *argv[], int argc)
{
	int	counter;
	int	comp;
	int	flag;

	counter = 1;
	comp = 0;
	while (counter < argc - 1)
	{
		flag = 0;
		comp = ft_strcmp(argv[counter], argv[counter + 1]);
		if (comp > 0)
		{
			ft_swap(&argv[counter], &argv[counter + 1]);
			flag++;
		}		
		counter++;
		if (flag != 0)
			counter = 1;
	}
}

int	main(int argc, char *argv[])
{
	int	counter;
	int	counter2;

	counter = 1;
	if (argc == 1)
		return (0);
	ft_sort(argv, argc);
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
