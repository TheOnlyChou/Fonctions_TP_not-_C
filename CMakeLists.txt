cmake_minimum_required(VERSION 3.28)
project(TP_algo_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TP_algo_C main.c
        cell.c
        cell.h
        list.c
        list.h
        queue.c
        queue.h
        node.c
        node.h
        tree.c
        tree.h
        stack.c
        stack.h)
