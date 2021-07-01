/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:00:43 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 13:12:09 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_strlen(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 
// 	str = "hello";
// 	if (ft_strlen(str) == 5)
// 		ft_print('y');
// 	return (0);
// }
