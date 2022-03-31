/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:01:41 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/30 19:38:59 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	diff;

	counter = 0;
	diff = 0;
	while (diff == 0 && s1[counter] && s2[counter])
	{	
		diff = s1[counter] - s2[counter];
		counter++;
	}
	return (diff);
}
