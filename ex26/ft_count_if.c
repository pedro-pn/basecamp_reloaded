/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:52:12 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 02:37:33 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
