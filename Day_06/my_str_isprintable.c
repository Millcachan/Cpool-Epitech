/*
** EPITECH PROJECT, 2023
** my_str_isprintable.c
** File description:
** strisprintable
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 32 || str[i] > 126)
            return 0;
    return 1;
}
