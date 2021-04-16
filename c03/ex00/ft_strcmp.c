/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:40:58 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/16 17:50:41 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		else if (s2[i] > s1[i] || s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		return ((unsigned char)s1[1] - (unsigned char)s2[i]);
	}
	return (0);
}
