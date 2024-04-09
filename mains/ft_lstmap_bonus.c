/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmao_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:03:50 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/28 13:16:03 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

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
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*position;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
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
		position = *lst;
		while (position->next)
			position = position->next;
		position->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*content;

	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		first = ft_lstnew(content);
		if (!first)
		{
			free(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, first);
		lst = lst->next;
	}
	return (new);
}

// Función de ejemplo para mapear el contenido de la lista
void	*my_mapping_function(void *content)
{

	return (content);
}

int	main(void)
{
	t_list *lst = ft_lstnew("Hola");
	ft_lstadd_back(&lst, ft_lstnew("Mundo"));
	ft_lstadd_back(&lst, ft_lstnew("desde"));
	ft_lstadd_back(&lst, ft_lstnew("casa"));
	ft_lstadd_back(&lst, ft_lstnew("me borro"));

	t_list *lista_mapeada = ft_lstmap(lst, my_mapping_function, free);

	while (lista_mapeada)
	{
		printf("%s\n", (char *)lista_mapeada->content);
		lista_mapeada = lista_mapeada->next;
	}

	ft_lstclear(&lst, free);
	ft_lstclear(&lista_mapeada, free);

	return (0);
}

