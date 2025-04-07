#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
/*#include <stdio.h>
int    main()
{
	int l = 5;
	t_list    *lst = ft_lstnew(&l);
	t_list    *node1;
	t_list    *node2;
	t_list    *node3;
	int i = 10;
	int j = 20;
	int k = 30;
	t_list    *lst1;

	node1 = ft_lstnew(&i);
	node2 = ft_lstnew(&j);
	node3 = ft_lstnew(&k);

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	lst1 = ft_lstlast(lst);

	printf("%d", *(int *)lst1->content);
}*/
