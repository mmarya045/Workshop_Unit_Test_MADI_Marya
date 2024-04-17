/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_is_token
*/

#include "tests_includes.h"

Test(str_is_token, token_simply_string)
{
    cr_assert(str_is_token("m", "maka"));
}

Test(str_is_token, token_simply_string_1)
{
    cr_assert(str_is_token("p", "pap"));
}

Test(str_is_token, dup_simply_string_4)
{
    char *str = "maka";
    char *ptr = NULL;

    str_is_token(str, ptr);
    cr_assert_str_neq(str, "m");
}
