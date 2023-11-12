/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:02:04 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/12 20:23:54 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*p_word;

	while (*++argv)
	{
		p_word = *argv;
		while (*p_word)
			ft_putchar(*p_word++);
		ft_putchar('\n');
	}
	return (0);
}

//use of temporary pointer p_word is due to overcome the issue
//of modificating the initial pointer to the whole array, in the outer loop
//which caused it to move and leaded to seg. fault