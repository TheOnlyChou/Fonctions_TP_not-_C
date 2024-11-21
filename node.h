//
// Created by alex8 on 21/11/2024.
//

#ifndef TP_ALGO_C_NODE_H
#define TP_ALGO_C_NODE_H

/**
 * @brief Structure de noeud
 */
typedef struct s_node
{
    struct s_node *left;
    int value;
    struct s_node *right;
} t_node;

/**
 * @brief Crée un noeud
 * @param val
 * @return t_node
 */
t_node *createNode(int val);


#endif //TP_ALGO_C_NODE_H
