/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:46:53 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/11 15:14:12 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (!dest)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	i;
// 	int	*range;
// 	int	minimum;
// 	int	maximum;

// 	minimum = 5;
// 	maximum = 3;
// 	range = ft_range(minimum, maximum);

// 	i = 0;

// 	if (!range)
// 	{
// 		printf("no range,\nmin is more than max.\n");
// 		return (0);
// 	}
// 	while (i < (maximum - minimum))
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// 	free(range);
// 	return (0);
// }
