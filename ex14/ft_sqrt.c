/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:09:30 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/11 14:52:58 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while ((i * i < nb) && (i <= 46340))
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(16));
// 	return (0);
// }
