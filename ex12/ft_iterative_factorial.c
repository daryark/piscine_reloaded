/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:31:14 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/07 11:40:52 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		f *= nb;
		nb -= 1;
	}
	return (f);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(14));
// 	return (0);
// }
