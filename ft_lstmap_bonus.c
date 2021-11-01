#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	if (!lst)
		return (NULL);
	newlist = ft_lstnew(f(lst -> content));
	if (!newlist)
		return (NULL);
	temp = newlist;
	while (lst != NULL)
	{
		newlist -> next = ft_lstnew(f(lst -> content));
		if (newlist -> next == NULL)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		newlist = newlist -> next;
		lst = lst -> next;
	}
	return (temp);
}
