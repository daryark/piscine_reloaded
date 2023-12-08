/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:56:51 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 21:06:18 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);


void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_print_params(int argc, char **argv)
{
	while (*++argv)
		ft_putstr(*argv);
}

int	ft_swap(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			if (*s1 < *s2)
				return (0);
			else
				return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*t;

	i = 1;
	while (argv[i + 1])
	{
		if (ft_swap(argv[i], argv[i + 1]))
		{
			t = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = t;
			i = 0;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
