
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(new_list));
	if (new_list)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (new_list);
}
