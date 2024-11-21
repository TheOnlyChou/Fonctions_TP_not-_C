//
// Created by alex8 on 21/11/2024.
//

#ifndef TP_ALGO_C_LIST_H
#define TP_ALGO_C_LIST_H

#include "cell.h"

/**
 * @brief Structure de liste standard
 */
typedef struct s_std_list
{
    t_cell * head;
} t_std_list;

/**
 * @brief Structure de liste head & tail
 */
typedef struct s_ht_list
{
    t_cell * head;
    t_cell * tail;
} t_ht_list;

/**
 * @brief Structure de liste circulaire
 */
typedef t_ht_list t_circ_list;

/**
 * @brief Structure de liste doublement chainée
 */
typedef struct s_dbl_list
{
    int value;
    struct s_dbl_list *prev;
    struct s_dbl_list *next;
} t_dbl_list;

/**
 * @brief Crée une liste standard vide
 * @return t_std_list
 */
t_std_list createEmptyStdList();
/**
 * @brief Crée une liste Head & Tail vide
 * @return t_std_list
 */
t_ht_list *createEmpty_HT_List();
/**
 * @brief Crée une liste standard vide
 * @return t_std_list
 */
t_circ_list createEmptyCircList();

#endif //TP_ALGO_C_LIST_H
