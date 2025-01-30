/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprenafe <aprenafe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:37:12 by aprenafe          #+#    #+#             */
/*   Updated: 2024/09/11 15:52:08 by aprenafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **ori, t_stack **dest)
{
	t_stack	*first_node;

	first_node = *ori;
	*ori = (*ori)->next;
	if (*ori)
		(*ori)->prev = NULL;
	if (!*dest)
	{
		*dest = first_node;
		(*dest)->next = NULL;
	}
	else
	{
		(*dest)->prev = first_node;
		first_node->next = *dest;
		*dest = first_node;
	}
}

void	pa(t_stack **b, t_stack **a, int check)
{
	if (!*b)
		return ;
	push(b, a);
	if (!check)
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, int check)
{
	if (!*a)
		return ;
	push(a, b);
	if (!check)
		write(1, "pb\n", 3);
}
