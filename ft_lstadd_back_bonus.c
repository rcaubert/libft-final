
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst)
	{
		tmp = *alst;
		if (*alst == NULL)
			*alst = new;
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
		tmp->next = new;
		}
	}
}
