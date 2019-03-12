/*
** EPITECH PROJECT, 2018
** Projet tek1
** File description:
** calloc
*/

#include "../include/my.h"

void *my_calloc(int nb, int size)
{
    int *i = NULL;
    int *j = NULL;

    if (nb <= 0 || size <= 0) {
        i = malloc(8);
        return (i);
    } else {
        if (size == 1 || size == 8)
            j = malloc(nb * size + 1);
        j = malloc(nb * size);
        for (int k = 0; k < nb; k++)
            j[k] = '\0';
    }
    free(i);
    return (j);
}
