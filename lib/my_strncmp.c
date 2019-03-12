/*
** EPITECH PROJECT, 2019
** Projet tek1
** File description:
** lib
*/

#include "../include/my.h"

int my_strncmp(char *str1, char *str2, int nb)
{
    for (int i = 0; str1[i] != 0 && i < nb; i++) {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    }
    return (0);
}
