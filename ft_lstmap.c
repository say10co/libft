/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:43:17 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 21:46:42 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
static t_list *ft_lstnew1(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);

}

static void del(void *p)
{
	free(p);
}

static	void *f(void *v)
{
	char *c;

	c = (char *)v;
	*c = 'x';
	return (c);
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*curr_old;
	t_list	*curr_new;
	t_list	*root;
	t_list	*next_ls;
	(void)(del);	
	if (!lst)
		return (NULL);
	curr_old = lst;
	root = ft_lstnew1(f(lst->content));
if (lst->content)
	free(lst);
	curr_new = root;
	while (curr_old)
	{
		next_ls = curr_old->next;
		curr_new->next = ft_lstnew1(f(curr_old->content));
		//del(curr_old);
		curr_new = curr_new->next;
		curr_old = next_ls;
	}
	return (root);
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
	
	ft_lstmap(root, &f, &del);
	t_list *curr;
	curr = root;
	while (curr)
	{
		printf("%s\n", (char*)curr->content);
		curr = curr->next;
	}
}
