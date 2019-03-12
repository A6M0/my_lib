/*
** EPITECH PROJECT, 2018
** PROJECT
** File description:
** infinadd
*/

#include "../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = 0;
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 2));

    for (; dest[len] != 0; len++)
        str[len] = dest[len];
    for (; src[i] != 0; i++, len++)
        str[len] = src[i];
    str[len + 1] = 0;
    return (str);
}
