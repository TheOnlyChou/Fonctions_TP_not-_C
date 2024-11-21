//
// Created by alex8 on 21/11/2024.
//

#include "cell.h"

#include "stdio.h"
#include "stdlib.h"

t_cell *createCell(int val)
{
    t_cell *p_res = NULL;
    p_res = (t_cell *)malloc(sizeof(t_cell));

    if (p_res == NULL)
    {
        return NULL;
    }

    p_res->value = val;
    p_res->next = NULL;

    return p_res;
}

