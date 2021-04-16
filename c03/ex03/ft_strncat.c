/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:48:08 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/16 17:09:31 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*copy_dest;
	unsigned int	i;

	i = 0;
	copy_dest = dest;
	while (*copy_dest != '\0')
	{
		copy_dest++;
	}
	while (*src != '\0' && (i < nb))
	{
		*copy_dest = *src;
		copy_dest++;
		src++;
		i++;
	}
	*copy_dest = '\0';
	return (dest);
}
