/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_char.c	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 05:21:27 by phperrot          #+#    #+#             */
/*   Updated: 2020/01/21 05:21:27 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strdup_char(char c)
{
	char			*output;

	if (!(output = malloc(sizeof(char) * 2)))
		return (NULL);
	output[0] = c;
	output[1] = '\0';
	return (output);
}
