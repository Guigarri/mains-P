/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:21:40 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 13:25:07 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		position = ft_lstlast(*lst);
		position->next = new;
	}
}

int main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = "Hola";
	node1->next = node2;

	node2->content = "Mundo";
	node2->next = node3;

	node3->content = "quetal";
	node3->next = NULL;

	t_list *new_node = malloc(sizeof(t_list));
	new_node->content = "Nuevo nodo";
	new_node->next = NULL;

	ft_lstadd_back(&node1, new_node);

	t_list *current_node = node1;
	while (current_node != NULL)
	{
		printf("%s\n", (char *)current_node->content);
		current_node = current_node->next;
	}

	// Liberar la memoria asignada a los nodos
	free(node1);
	free(node2);
	free(node3);
	free(new_node);

	return 0;
}

