/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:25:21 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 15:22:13 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar( char c)
{
	write( 1, &c, 1);
}

int ft_print_params( int argc, char **argv)
{
	int i;

	i = -1;
	while (++i<argc)
	{
		ft_putchar( *argv[i]);
	}
	return (0);
}

int main( int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
