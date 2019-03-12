/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** lib
*/

#include "../include/my.h"

int nb_len(char const *str, int i, int len, int j)
{
    len = len + (str[i] - 48);
    if (str[i + 1] > 47 && str[i + 1] < 58)
        len = len * 10;
    if (len == 2147483647 && j < 1)
        return (-2147483647);
    return (len);
}

int my_getnbr(char const *str)
{
    int len = 0;
    int j = 1;

    for (int i = 0; str[i] != '\0' && (len + str[i]) < 2147483647; i++) {
        if ((str[i] < 48 || str[i] > 57) && (str[i] != 43 && str[i] != 45))
            return (j * len);
        if (str[i] == 45)
            j = j * -1;
        if (str[i] > 47 && str[i] < 58) {
            len = nb_len(str, i, len, j);
        }
    }
    if (len < 2147483647)
        return (len * j);
    return (0);
}
