/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my
*/

#ifndef _STRUCT_
#define _STRCUT_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <termios.h>
#include <ncurses.h>
#include <curses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <dirent.h>
#include <pwd.h>
#include <time.h>
#include <grp.h>
#include <sys/wait.h>
#include <assert.h>

typedef struct format_s
{
    void (*fptr)(va_list);
    char tab;
} format_t;

void *my_calloc(int nb, int size);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar (char c);
int my_putstr(char const *str);
char **my_str_to_word_array(char const *str, char const strm);
char *my_strcat(char *dest, const char *src);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_printf(char const *format, ...);
void my_swap(int *a, int *b);
void f_char(va_list list);
void f_integer(va_list list);
void f_string(va_list list);
void f_octal(va_list list);
void f_hexadecimal(va_list list);
void f_hexadecimalmaj(va_list list);
void f_binary(va_list list);
void f_pointer(va_list list);
void f_unsigned(va_list list);
void f_shadow(va_list list);
void my_showstr_base(char *str);
int my_put_nbr_base(long nb, char *base);
int my_strcmp(char const *s1, char const *s2);
char *my_array_strcpy(char *str);
int my_strncmp(char *str1, char *str2, int nb);

#endif /* !_STRUCT_ */
