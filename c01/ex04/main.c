/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:08:27 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/12 23:19:47 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 7;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div %d, sobra %d\n", a, b);
	return (0);
}
