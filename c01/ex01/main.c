/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:29:45 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/12 22:49:08 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int a;
	int *prt1;
	int **prt2;
	int ***prt3;
	int ****prt4;
	int *****prt5;
	int ******prt6;
	int *******prt7;
	int ********prt8;
	int *********prt9;

	a = 1;
	prt1 = &a;
	prt2 = &prt1;
	prt3 = &prt2;
	prt4 = &prt3;
	prt5 = &prt4;
	prt6 = &prt5;
	prt7 = &prt6;
	prt8 = &prt7;
	prt9 = &prt8;
	printf("Antes: %d\n", *********prt9);
	ft_ultimate_ft(prt9);
	printf("Depois: %d\n", *********prt9);
	return (0);
}
