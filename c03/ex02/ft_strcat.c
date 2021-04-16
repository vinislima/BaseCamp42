/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:03:45 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/16 00:22:36 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *cop_dest;

	cop_dest = dest;
	while (*cop_dest != '\0')
	{
		cop_dest++;
	}
	while (*src != '\0')
	{
		*cop_dest = *src;
		cop_dest++;
		src++;
	}
	*cop_dest = '\0';
	return (dest);
}
