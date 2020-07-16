/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:45:54 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 15:50:57 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen( char *str);
{
	int count;
	int index;

	count = 0;
	index = 0;
	while (str[index] ! = '\0')
	{
		count++;
		index++;
	}
	return (count);
}
