/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:49:46 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 13:02:20 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
static t_list *ft_lstlast(t_list *lst)
{
	t_list	*curr;

	curr = lst;
	while (curr->next)
		curr = curr->next;
	return (curr);

}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (!*lst)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int main()
{
	t_list *root;
	t_list *new;

	root = ft_lstnew("b");
	root->next = ft_lstnew("c");
	root->next->next = ft_lstnew("d");
	new = ft_lstnew("e");
	t_list *curr;
	root = NULL;	
	ft_lstadd_back(&root, new);
	curr = root;
	while (curr)
	{
		printf("%s\n", (char*)curr->content);
		curr = curr->next;
	}
}
*/
