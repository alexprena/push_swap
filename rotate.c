/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprenafe <aprenafe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:40:58 by aprenafe          #+#    #+#             */
/*   Updated: 2024/09/11 15:51:24 by aprenafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = ft_last_node(*stack);
	first_node = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next = first_node;
	first_node->next = NULL;
	first_node->prev = last_node;
}

void	ra(t_stack **a, int check)
{
	rotate(a);
	if (!check)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int check)
{
	rotate(b);
	if (!check)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, int check)
{
	rotate(a);
	rotate(b);
	if (!check)
		write(1, "rr\n", 3);
}
