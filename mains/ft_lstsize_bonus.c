/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:09:24 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 18:11:59 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int	ft_lstsize(t_list *lst)
{
	int		xd;
	t_list	*position;

	xd = 0;
	position = lst;
	while (position != NULL)
	{
		position = position->next;
		xd++;
	}
	return (xd);
}

int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));

	node1->content = "Nodo 1";
	node2->content = "Nodo 2";
	node3->content = "Nodo 3";
	node4->content = "Nodo 4";

	// Enlazar los nodos
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	int size = ft_lstsize(node1);
	printf("Tamaño de la lista: %d\n", size);

	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return (0);
}



