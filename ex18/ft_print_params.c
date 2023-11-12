/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:02:04 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 11:49:18 by dyarkovs         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
