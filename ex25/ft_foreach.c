/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:58:20 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 14:36:06 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>


void	ft_foreach(int *tab, int length, void	(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	char	nb_c;

// 	nb_c = '0';
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb *= -1;
// 	}
// 	if (nb < 10)
// 	{
// 		nb_c += nb;
// 		write(1, &nb_c, 1);
// 	}
// 	else
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// }

// int	main(void)
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};

// 	ft_foreach(tab, 5, &ft_putnbr);
// 	return (0);
// }
