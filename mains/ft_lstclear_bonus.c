/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:37:08 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 15:39:12 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura para los nodos de la lista
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

// Función para eliminar un solo nodo de la lista
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content); // Llama a la función 'del' para liberar el contenido
	free(lst); // Libera la memoria del nodo
}

// Función para eliminar todos los nodos de la lista
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*position;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		position = (*lst)->next; // Guarda la posición del siguiente nodo
		ft_lstdelone(*lst, del); // Elimina el nodo actual
		*lst = position; // Avanza al siguiente nodo
	}
}

int main()
{
	// Crear una lista enlazada con algunos nodos (para demostración)
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	// Asignar contenido a los nodos (pueden ser cualquier tipo de datos)
	node1->content = "Hola, mundo!";
	node2->content = "¡Copilot es genial!";
	node3->content = "Adiós, mundo cruel.";

	// Enlazar los nodos
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	// Eliminar todos los nodos de la lista
	ft_lstclear(&node1, free);

	// La lista ahora está vacía

	return 0;
}

