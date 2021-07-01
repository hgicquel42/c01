/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:51:40 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 10:59:26 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *b;
	*b = *a;
	*a = t;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 
// 	a = 42;
// 	b = 21;
// 	ft_swap(&a, &b);
// 	if (a == 21 && b == 42)
// 		ft_print('y');
// 	return (0);
// }
