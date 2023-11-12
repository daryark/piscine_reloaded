/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:00:42 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 19:48:42 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error(int argc)
{
	if (argc < 2)
	{
		write(1, "File name is missing.\n", 25);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 25);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_error(argc);
	return (0);
}
