#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int    main()
{
	int    i = 42;
	int    k = 56;
	int    j = 10;
	t_list *head = ft_lstnew(&i);

	t_list *node = ft_lstnew(&k);

	head->next = ft_lstnew(&j);
	ft_lstadd_front(&head, node);
	printf("%d\n", *(int *)head->content);
	printf("%d\n", *(int *)head->next->content);
	printf("%d\n", *(int *)head->next->next->content);    
}*/
