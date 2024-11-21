//
// Created by alex8 on 21/11/2024.
//

#include "list.h"
#include "stdlib.h"

t_std_list createEmptyStdList()
{
    t_std_list list;
    list.head = NULL;

    return list;
}

t_ht_list *createEmpty_HT_List()
{
    t_ht_list *list = (t_ht_list *)malloc(sizeof(t_ht_list));

    if (list == NULL)
    {
        return NULL;
    }

    list->head = NULL;
    list->tail = NULL;

    return list;
}

t_circ_list createEmptyCircList()
{
    t_circ_list cl;
    cl.head = NULL;
    cl.tail = NULL;

    return cl;
}