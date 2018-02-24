/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_pipe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:49:08 by mbriffau          #+#    #+#             */
/*   Updated: 2018/02/24 20:11:31 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	malloc_ptr_pipe(t_lem *l)
{
	t_room		*tmp;

	tmp = l->room_list;
	while (tmp != NULL)
	{
		if (!(tmp->pipe = malloc(sizeof(void*) * l->nb_room)))
			exit(1);
		ft_bzero(tmp->pipe, sizeof(void*));
		tmp = tmp->next;
	}
}

int		strequ_room(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if ((!s1) || (!s2))
		return (0);
	while (s1 || s2)
	{
		if ((s1[i] == '-' && s2[i] == 0) || (s2[i] == '-' && s1[i] == 0))
			return (1);
		if (s1[i] != s2[i])
			return (0);
		if ((s1[i] == s2[i]) && (s1[i] == 0))
			return (1);
		i++;
	}
	return (0);
}

t_room	*get_room(char *s, t_room *r)
{
	while (r && (strequ_room(s, r->name) == 0))
	{
		r = r->next;
	}
	if (r == NULL)
	{
		ft_error("ERRORget");
	}
	return (r);
}

void	parse_pipe(t_lem *l, char *s)
{
	int		j;
	int		i;
	t_room	*r1;
	t_room	*r2;

	j = 0;
	i = ft_strlen_c(s, '-');
	r1 = l->room_list;
	r2 = l->room_list;
	if (!(r1->npipe < l->nb_room) || !(r1->npipe < l->nb_room))
	{

		ft_error("ERROR (too much pipe)");
	}
	r1 = get_room(&s[j], &*r1);
	j = next_word(s, i, '-');
	r2 = get_room(&s[j], &*r2);
	r1->pipe[r1->npipe] = r2;
	r1->npipe++;
	r2->pipe[r2->npipe] = r1;
	r2->npipe++;
}

// int		check_pipe(t_lem *l)
// {
// 	while (l->lmap[l->i] != 0)
// 	{
// 		if (parse_comment(&*l) == 0)
// 			break ;
// 		if (ft_count_word(l->lmap[l->i], '-') != 2
// 			|| ft_strchr(l->lmap[l->i], ' '))
// 		{
// 			ft_error("ERROR");
// 		}
// 		parse_pipe(&*l);
// 		l->i++;
// 	}
// 	return (1);
// }
