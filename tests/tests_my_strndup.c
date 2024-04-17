/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strndup
*/

#include "tests_includes.h"

Test(my_strndup, dup_simply_string)
{
    char *str = "Marya";
    int n = 5;

    my_strndup(str, n);
    cr_assert_str_eq(str, "Marya");
}


Test(my_strndup_1, dup_simply_string)
{
    char *str = "diaddad";
    int n = 5;

    my_strndup(str, n);
    cr_assert_str_neq(str, "eddad");
}

Test(my_strndup_2, dup_simply_string)
{
    char *str = "ma";
    int n = 2;

    my_strndup(str, n);
    cr_assert_str_eq(str, "ma");
}

Test(my_strndup_3, dup_simply_string)
{
    char *str = "maka";
    int n = -3;

    my_strndup(str, n);
    cr_assert_str_eq(str, "maka");
}

