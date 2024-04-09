/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:48:18 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/28 13:56:01 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura t_list
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

// Función que se aplicará a cada elemento de la lista
void print_content(void *content)
{
	printf("Contenido: %s\n", (char *)content);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *position;

	if (!lst)
		return;
	position = lst;
	while (position != NULL)
	{
		(*f)(position->content);
		position = position->next;
	}
}

int main(void)
{
	t_list *lista = malloc(sizeof(t_list));
	lista->content = "Hola";
	lista->next = malloc(sizeof(t_list));
	lista->next->content = "Mundo";
	lista->next->next = NULL;

	ft_lstiter(lista, print_content);

	free(lista->next);
	free(lista);

	return 0;
}

