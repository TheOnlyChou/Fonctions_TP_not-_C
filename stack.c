//
// Created by alex8 on 21/11/2024.
//

#include "stack.h"
#include "stdlib.h"

t_stack_list createEmptyStack()
{
    t_stack_list s;
    s.head = NULL;
    return s;
}

t_stack_tab createEmptyStack_tab(int size)
{
    t_stack_tab s;
    s.nbElts = 0;

    if(size < 0)
    {
        s.max_size = 0;
        s.values = NULL;
    }

    else
    {
        s.max_size = size;
        s.values = (int *)malloc(size * sizeof(int));
    }

    return s;
}