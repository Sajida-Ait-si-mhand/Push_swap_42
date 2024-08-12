/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:55:54 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/06 05:14:08 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_node **stack)
{
	t_node *head;
	t_node *bottom;
	
	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		bottom = last_node(head);
		*stack = head->next;
		bottom->next = head;
		head->next = NULL;
	}	
}

void ra(t_node **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void rb(t_node **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}