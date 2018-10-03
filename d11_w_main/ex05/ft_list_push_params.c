#include "ft_list.h"

t_list  *ft_list_push_params(int ac, char **av)
{
    int     size;
    t_list  *list;
    t_list  *begin_list;
    
    size = 2;
    begin_list = ft_create_elem(av[1]);
    while (size < ac)
    {
        list = ft_create_elem(av[size++]);
        list->next = begin_list;
        begin_list = list;
    }
    return (begin_list);
}