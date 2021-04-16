/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:05:23 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/14 18:25:00 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "abcdefghi";
	str2 = "Abcdefghi";
	str3 = "abc:efghi";
	str4 = "abcdefgh2";
	printf("str1: %s, is_lower: %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, is_lower: %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s, is_lower: %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s, is_lower: %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
}
