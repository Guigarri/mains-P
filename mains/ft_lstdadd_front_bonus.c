/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdadd_front_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:05:02 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 13:07:47 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		new->next = NULL;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

int	main(void)
{
	// Crear una lista vacía
	t_list *my_list = NULL;

	// Crear un nuevo nodo con contenido "Hola, mundo!"
	t_list *new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		perror("Error al asignar memoria");
		return 1;
	}
	new_node->content = "Hola, mundo!";
	new_node->next = NULL;

	// Agregar el nuevo nodo al frente de la lista
	ft_lstadd_front(&my_list, new_node);

	// Imprimir el contenido de la lista
	t_list *current = my_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Liberar la memoria
	free(new_node);

	return 0;
}

