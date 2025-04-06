#include "libc.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	plus1(void *content)
{
	*(int *)content = *(int *)content + 1;
}

#include <stdio.h>
int    main()
{
	int    i = 42;
	int    k = 56;
	int    j = 10;
	t_list *head = ft_lstnew(&i);

	t_list *node = ft_lstnew(&k);

	head->next = ft_lstnew(&j);
	ft_lstadd_back(&head, node);
	printf("%d\n", *(int *)head->content);
	printf("%d\n", *(int *)head->next->content);
	printf("%d\n", *(int *)head->next->next->content);
	
	ft_lstiter(head, plus1);

	printf("\n%d\n", *(int *)head->content);
	printf("%d\n", *(int *)head->next->content);
	printf("%d\n", *(int *)head->next->next->content);
}*/
