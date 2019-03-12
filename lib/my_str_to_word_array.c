/*
** EPITECH PROJECT, 2018
** Projet tek1
** File description:
** test02
*/

#include "../include/my.h"

int count_lines(char const *str, char strm)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == strm)
            len++;
    }
    len++;
    return (len);
}

char **count_cols(char const *str, char strm)
{
    int len = count_lines(str, strm);
    char **strp;

    strp = malloc(sizeof(char *) * (len + 1));
    strp[len] = NULL;
    for (int y = 0; y < len; y++) {
        for (int i = 0; str[i] != '\0'; i++) {
            strp[y] = malloc(sizeof(char) * (i + 1));
        }
    }
    return (strp);
}

char **my_str_to_word_array(char const *str, char const strm)
{
    char **strp;
    int x = 0;
    int y = 0;

    strp = count_cols(str, strm);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == strm) {
            strp[y][x] = '\0';
            y++;
            x = 0;
        } else {
        strp[y][x] = str[i];
        x++;
        }
    }
    return (strp);
}
