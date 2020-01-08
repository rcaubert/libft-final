
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*start;
	t_list	*follow;

	if (lst)
	{
		tmp = lst;
		if(!(start = ft_lstnew(f(tmp->content))))
			return (NULL);
		follow = start;
		tmp = tmp->next;
		while (tmp)
		{
			if(!(follow = ft_lstnew(f(tmp->content))))
				return (NULL);
			ft_lstadd_back(&start, follow);
			tmp = tmp->next;
		}
		return (start);
	}
	return (NULL);
}
