/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:42:10 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/09 15:43:06 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int num)
{
	char du;
	char un;

	du = (num / 10) + '0';
	un = (num % 10) + '0';
	write(1, &du, 1);
	write(1, &un, 1);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_number(num1);
			write(1, " ", 1);
			ft_print_number(num2);
			if (num1 != 98 || num2 != 99)
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
