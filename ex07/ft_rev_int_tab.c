/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:13:17 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 13:41:40 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }
// 
// void	ft_print_tab(int *tab, int size)
// {
// 	int	i;
// 
// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_print('0' + tab[i]);
// 		i++;
// 	}
// 	ft_print('\n');
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	i;
	int	j;

	i = 0;
	while (1)
	{
		j = size - 1 - i;
		if (size % 2 == 1 && i == j)
			break ;
		if (size % 2 == 0 && i == j + 1)
			break ;
		x = tab[i];
		y = tab[j];
		tab[i] = y;
		tab[j] = x;
		i++;
	}
}

// int	main(void)
// {
// 	int	t1[6];
// 	int	t2[5];
// 
// 	t1[0] = 1;
// 	t1[1] = 2;
// 	t1[2] = 3;
// 	t1[3] = 4;
// 	t1[4] = 5;
// 	t1[5] = 6;
// 	ft_rev_int_tab(t1, 6);
// 	ft_print_tab(t1, 6);
// 	t2[0] = 1;
// 	t2[1] = 2;
// 	t2[2] = 3;
// 	t2[3] = 4;
// 	t2[4] = 5;
// 	ft_rev_int_tab(t2, 5);
// 	ft_print_tab(t2, 5);
// 	return (0);
// }
