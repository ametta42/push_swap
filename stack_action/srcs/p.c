/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:59:19 by ametta            #+#    #+#             */
/*   Updated: 2021/05/19 09:59:20 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../sorting_program/includes/lib.h"

void	pb(void)
{
	t_list	*toMove;

	if (stack_b)
	{
		toMove = stack_b;
		stack_b = stack_b->next;
		toMove->next = stack_a;
		stack_a = toMove;
	}
}

void	pa(void)
{
	t_list	*toMove;

	if (stack_a)
	{
		toMove = stack_a;
		stack_a = stack_a->next;
		toMove->next = stack_b;
		stack_b = toMove;
	}
}
