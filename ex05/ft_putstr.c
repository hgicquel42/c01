/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:48:04 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 12:59:10 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		ft_print(c);
		i++;
	}
}

// int	main(void)
// {
// 	char	*str;
// 
// 	str = "hello world";
// 	ft_putstr(str);
// 	return (0);
// }
