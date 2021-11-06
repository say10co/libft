#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *root;
	t_list	*last;
	last = (t_list *)malloc(sizeof(t_list));
	last->content = "a";
	root = ft_lstnew("b");
	root->next = ft_lstnew("c");
	root->next->next = ft_lstnew("d");
	
	//ft_lstadd_front(&root, last);

	t_list *curr;

	curr = root;
	while (curr)
	{
		printf("%s\n", (char*)curr->content);
		curr = curr->next;
	}
}
*/
