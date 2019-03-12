/*
** EPITECH PROJECT, 2018
** ly_strncry
** File description:
** task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (; n > 0; n--) {
        for (int i = 0; i < n; i++)
            dest[i] = src[i];
    }
    return (dest);
}
