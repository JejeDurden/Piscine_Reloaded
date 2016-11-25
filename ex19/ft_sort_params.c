/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:41:50 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/03 11:03:24 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		arg;
	char	*temp;

	arg = 1;
	while (arg < argc - 1)
	{
		if (ft_strcmp(argv[arg], argv[arg + 1]) > 0)
		{
			temp = argv[arg];
			argv[arg] = argv[arg + 1];
			argv[arg + 1] = temp;
			arg = 1;
		}
		else
			arg++;
	}
	arg = 1;
	while (arg < argc)
	{
		ft_putstr(argv[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
