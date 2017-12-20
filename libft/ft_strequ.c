/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srequ.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkaznodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:52:46 by vkaznodi          #+#    #+#             */
/*   Updated: 2017/12/01 14:52:48 by vkaznodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (s1[i] == s2[i])
		while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
			else if ((s1[i] == s2[i]) && (s1[i + 1] == '\0') && (s2[i + 1] == '\0'))
				return (1);
		}
	else
		return (0);
}
