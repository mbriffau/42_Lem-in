/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 01:30:00 by mbriffau          #+#    #+#             */
/*   Updated: 2018/01/30 02:12:54 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	ft_test_room_list(t_room *rlst)///////
{
	t_room *tmp;

	tmp = rlst;
	printf("(*rlst)->");
	while (tmp)
	{
		printf("[%s]->", tmp->name);
		tmp = tmp->next;
	}
	printf("NULL\n");
}

void	ft_test_room_pipe(t_room *rlst)///////
{
	t_room *tmp;
	int i;

	i= 0;
	tmp = rlst;
	printf(" |\n");
	while (tmp)
	{
		i = 0;
		printf("[%s]->", tmp->name);
		while (tmp->pipe[i])
		{
			printf("<%s>", tmp->pipe[i]->name);
			i++;
		}
		tmp = tmp->next;
		printf("\n |\n");
	}
	printf("NULL\n");
}