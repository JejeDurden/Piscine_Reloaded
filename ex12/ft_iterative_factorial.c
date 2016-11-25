/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:19:34 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/02 20:27:18 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		nb--;
		result *= nb;
	}
	return (result);
}
