//
// Created by alex8 on 21/11/2024.
//

#ifndef TP_ALGO_C_TREE_H
#define TP_ALGO_C_TREE_H

#include "node.h"

/**
 * @brief Structure d'arbre
 */
typedef struct s_tree
{
    t_node *root;
} t_tree;

/**
 * @brief Crée un arbre vide
 * @return t_tree
 */
t_tree createEmptyTree();


#endif //TP_ALGO_C_TREE_H
