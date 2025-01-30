/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprenafe <aprenafe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:06:18 by aprenafe          #+#    #+#             */
/*   Updated: 2024/09/11 15:56:20 by aprenafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (error_syntax(argv) || error_int(argv) || error_dup(argv))
		print_error();
	fill_stack(&a, argv);
	if (!is_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, 0);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else if (stack_len(a) <= 5)
			sort(&a, &b, 1);
		else
			sort(&a, &b, 0);
	}
	ft_free_stack(&a);
	return (0);
}
