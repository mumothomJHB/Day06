/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:17:16 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/16 17:05:55 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar( char c )
{
	write( 1, &c, 1 );
}

void ft_print_params( int argc, char **argv)
{
	int i;
	int x;

	i = 0;
	x = argc -1;
	while ( x > 0 )
	{
		while (argv[x][i] !='\0')
		{
			ft_putchar( argv[x][i]);
			i++;
		}

		ft_putchar('\n');
		x--;
		i = 0;
	}
}
int main( int argc, char **argv)

{
	ft_print_params(argc, argv);
	return (0);
}
