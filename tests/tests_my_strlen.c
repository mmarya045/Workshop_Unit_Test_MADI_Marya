/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strlen
*/

#include "tests_includes.h"

Test(my_strlen, tests_my_strlen)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlen_1, tests_my_strlen_1)
{
    cr_assert_eq(my_strlen("szjcezocoadka"), 13);
}

Test(my_strlen_2, tests_my_strlen)
{
    cr_assert_neq(my_strlen("eihczi"), 9);
}

Test(my_strlen_3, tests_my_strlen)
{
    cr_assert_eq(my_strlen(NULL), -1);
}
