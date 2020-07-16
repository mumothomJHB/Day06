/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:37:45 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 15:45:14 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar ( char c );
{
	wrrite(1,&c,1);
}

void ft_putstr( char *str)
{

	int count;
	char *ptr;
	count = 0;
	
	while ( count < strlen(str)) 
		{
			ptr = (str + count);
			count++;
		}
}



