/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:26:13 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 15:30:38 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;


void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}


int main(void)
{

	int *data = (int *)malloc(sizeof(int));
	*data = 42;

	t_list *node = (t_list *)malloc(sizeof(t_list));
	node->content = data;
	node->next = NULL;

	ft_lstdelone(node, free);

	printf("Nodo liberado correctamente.\n");

	return 0;
}

