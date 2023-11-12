/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:56:51 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 20:26:59 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
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
	char	*p_word;

	i = 1;
	while (argv[i + 1])
	{
		if (ft_strcmp(argv[i], argv[i + 1]))
		{
			t = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = t;
			i = 0;
		}
		i++;
	}
	while (*++argv)
	{
		p_word = *argv;
		while (*p_word)
			ft_putchar(*p_word++);
		ft_putchar('\n');
	}
	return (0);
}
