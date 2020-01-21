/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 05:19:25 by phperrot          #+#    #+#             */
/*   Updated: 2020/01/21 05:19:25 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strreplace(char *str, char old, char new)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == old)
			str[i] = new;
		i++;
	}
	return (str);
}
