//
// Created by alex8 on 21/11/2024.
//

#ifndef TP_ALGO_C_STACK_H
#define TP_ALGO_C_STACK_H

#include "list.h"

/**
 * @brief Structure de pile
 */
typedef t_std_list t_stack_list;

/**
 * @brief Crée une pile vide
 * @return t_stack_list
 */
t_stack_list createEmptyStack();

/**
 * @brief Structure de pile
 */
typedef struct s_stack_tab
{
    int *values;    // les valeurs à stocker
    int max_size;   // la taille max
    int nbElts;     // repère pour empiler/dépiler
} t_stack_tab;

t_stack_tab createEmptyStack_tab(int size);


#endif //TP_ALGO_C_STACK_H
