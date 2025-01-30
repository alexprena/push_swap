/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprenafe <aprenafe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:18:32 by aprenafe          #+#    #+#             */
/*   Updated: 2024/09/11 15:51:49 by aprenafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_last_node(t_stack *stack)
{
	t_stack	*last;

	if (!stack)
		return (NULL);
	while (stack)
	{
		last = stack;
		stack = stack->next;
	}
	return (last);
}

int	is_sorted(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_len(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

t_stack	*max_node(t_stack *stack)
{
	int		max;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max = INT_MIN;
	while (stack)
	{
		if (stack->num > max)
		{
			max = stack->num;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack	*min_node(t_stack *stack)
{
	int		min;
	t_stack	*min_node;

	if (!stack)
		return (NULL);
	min = INT_MAX;
	while (stack)
	{
		if (stack->num < min)
		{
			min = stack->num;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}
