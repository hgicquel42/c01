/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:15:55 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 14:33:59 by hgicquel         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	t1[6];
// 	int	t2[5];
// 
// 	t1[0] = 4;
// 	t1[1] = 7;
// 	t1[2] = 3;
// 	t1[3] = 8;
// 	t1[4] = 2;
// 	t1[5] = 5;
// 	ft_sort_int_tab(t1, 6);
// 	ft_print_tab(t1, 6);
// 	t2[0] = 0;
// 	t2[1] = 8;
// 	t2[2] = 5;
// 	t2[3] = 4;
// 	t2[4] = 2;
// 	ft_sort_int_tab(t2, 5);
// 	ft_print_tab(t2, 5);
// 	return (0);
// }
