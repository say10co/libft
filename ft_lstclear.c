/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:22:56 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 18:37:16 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
static void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*curr;

	curr = (*lst)->next;
	ft_lstdelone(*lst, del);
	*lst = NULL;
	while (curr)
	{
		next_node = curr->next;
		ft_lstdelone(curr, del);
		curr = next_node;
	}
}
/*
static void del(void *p)
{
	free(p);
}

int main()
{
	t_list *root;
	char *str1;
	char *str2;
	char *str3;
	str1 = (char *)malloc(sizeof(char));
	str2 = (char *)malloc(sizeof(char));
	str3 = (char *)malloc(sizeof(char));
	*str1 = 'a';
	*str2 = 'b';
	*str3 = 'e';

	root = ft_lstnew(str1);
	root->next = ft_lstnew(str2);
	root->next->next = ft_lstnew(str3);
	
	t_list *curr;
	curr = root;
	while (curr)
	{
		printf("%s\n", (char*)curr->content);
		curr = curr->next;
	}
	ft_lstclear(&root, &del);
	curr = root ;
	while (curr)
	{
		printf("%s\n", (char*)curr->content);
		curr = curr->next;
	}
}
*/
