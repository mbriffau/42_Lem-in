/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:04:42 by mbriffau          #+#    #+#             */
/*   Updated: 2018/01/17 18:57:58 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/lem_in.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_count_word(av[1], ' '));
	}
	return (0);
}