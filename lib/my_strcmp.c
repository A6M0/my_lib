/*
** EPITECH PROJECT, 2019
** Projet tek1
** File description:
** strcmp
*/

#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] != 0 || s2[i] != 0; i++) {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}
