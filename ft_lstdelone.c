/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:07:23 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 18:01:19 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
	lst = NULL;
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
	
	//ft_lstdelone(root, &del);
	t_list *curr;
	curr = root;
	while (curr)
	{
		printf("%s\n", (char*)curr->content);
		curr = curr->next;
	}
}
*/
