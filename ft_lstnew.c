#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list	*new_elem;
	
	new_elem = (t_list *)malloc(sizeof(t_list));
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);

}
/*
int main(void)
{
	 t_list *nbr;
	 int data;

	 data = 5;
	 nbr = ft_lstnew(&data);
	 printf("%d\n", *(int *)nbr->content);
}
*/
