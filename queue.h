//
// Created by alex8 on 21/11/2024.
//

#ifndef TP_ALGO_C_QUEUE_H
#define TP_ALGO_C_QUEUE_H

#include "list.h"

#define MAX 50 // Taille physique de la file

/**
 * @brief Structure de file
 */
typedef t_ht_list t_queue_list;

/**
 * @brief Crée une file vide
 * @return t_queue_list
 */
t_queue_list createEmptyQueue();

/**
 * @brief Structure de file
 */
typedef struct s_queue_tab
{
    int values[MAX];
    int first, last;
} t_queue_tab;

/**
 * @brief Crée une file vide
 * @return t_queue_tab
 */
t_queue_tab createEmptyQueue_tab();


#endif //TP_ALGO_C_QUEUE_H
