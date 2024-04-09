/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:19:38 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 13:19:45 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura t_list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

// Función ft_lstlast para encontrar el último elemento de la lista
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int main(void)
{
	// Crear una lista enlazada simple con algunos nodos
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = "Hola";
	node1->next = node2;

	node2->content = "Mundo";
	node2->next = node3;

	node3->content = "el ultimo nodo";
	node3->next = NULL;

	t_list *last_node = ft_lstlast(node1);

	if (last_node)
		printf("El último nodo contiene: %s\n", (char *)last_node->content);
	else
		printf("La lista está vacía.\n");

	// Liberar la memoria asignada a los nodos
	free(node1);
	free(node2);
	free(node3);

	return 0;
}

