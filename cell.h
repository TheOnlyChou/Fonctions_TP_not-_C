//
// Created by alex8 on 21/11/2024.
//
#ifndef TP_ALGO_C_CELL_H
#define TP_ALGO_C_CELL_H

/**
 * @brief Structure de cellule
 */
typedef struct s_cell
{
    int value;
    struct s_cell *next;
} t_cell;

/**
 * @brief Crée une cellule
 * @param val
 * @return t_cell
 */
t_cell *createCell(int val);


#endif //TP_ALGO_C_CELL_H
