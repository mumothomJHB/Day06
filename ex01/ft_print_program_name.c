/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:13:52 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 14:19:42 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar ( char c)
{
	write(1, &c, 1);
}
int ft_print_program_name( int argc , char **argv)
{
	ft_putchar(*argv[0]);
	return (0);
}

int main( int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
