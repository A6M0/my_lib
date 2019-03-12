/*
** EPITECH PROJECT, 2019
** Projet tek1
** File description:
** lib function
*/

#include "../include/my.h"

char *my_array_strcpy(char *str)
{
    char *str1 = malloc(sizeof(char) * my_strlen(str));
    int y = 0;

    for (; str[y] != 0; y++)
        str1[y] = str[y];
    return (str1);
}
