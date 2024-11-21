//
// Created by alex8 on 21/11/2024.
//

#include "queue.h"
#include "stdlib.h"

t_queue_list createEmptyQueue()
{
    t_queue_list ql;

    ql.head = NULL;
    ql.tail = NULL;

    return ql;
}

t_queue_tab createEmptyQueue_tab()
{
    t_queue_tab q;
    q.first = q.last = 0;
    return q;
}

// Fonction dequeue avec la structure de type t_queue_tab

