/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:38:01 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/02 20:27:13 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	result *= ft_recursive_factorial(nb - 1);
	return (result);
}
