/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:17:18 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/12 22:48:37 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("Antes: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("Depois: %d %d\n", a, b);
	return (0);
}
