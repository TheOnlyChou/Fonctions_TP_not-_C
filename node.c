//
// Created by alex8 on 21/11/2024.
//

#include "node.h"
#include "stdlib.h"

t_node *createNode(int val)
{
    t_node *n = (t_node *)malloc(sizeof(t_node));

    n->value = val;
    n->left = NULL;
    n->right = NULL;

    return n;
}