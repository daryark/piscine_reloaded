/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:38:36 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 18:08:32 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (tab[i])
		res += f(tab[i++]);
	return (res);
}

// int	ft_strlen_odd(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i % 2 == 1);
// }

// int	main(void)
// {
// 	char	*tab[] = {"hello", "world", "hey", "cool"};

// 	printf("res: %d\n", ft_count_if (tab, &ft_strlen_odd));
// 	return (0);
// }
