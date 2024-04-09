/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:59:36 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 13:01:09 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	// Ejemplo de uso:
	int *data = (int *)malloc(sizeof(int));
	*data = 1000;

	t_list *node = ft_lstnew(data);
	if (node)
	{
		// Haz algo con el nodo creado...
		// Por ejemplo, imprime el contenido:
		printf("Contenido del nodo: %d\n", *(int *)(node->content));
		free(data); // No olvides liberar la memoria asignada
		free(node);
	}

	return (0);
}

