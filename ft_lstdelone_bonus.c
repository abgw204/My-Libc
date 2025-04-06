#include "libc.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	free(content);
}

#include <stdio.h>
int	main()
{
	int	i;

	i = 42;
	t_list	*lst = ft_lstnew(&i);

	ft_lstdelone(lst, del);
	if (!lst->content)
		printf("Worked!");
	else
		printf("Did not work!");
}*/
