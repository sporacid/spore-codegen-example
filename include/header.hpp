#pragma once

namespace spore::codegen::example
{
    template <typename, typename...>
    struct my_type_traits
    {
        static constexpr bool enabled = false;
    };

    struct [[enable]] my_struct
    {

    };

    template <typename value_t>
    struct [[enable]] my_other_struct
    {

    };
}

#ifndef SPORE_CODEGEN
#include "header.example.hpp"
#endif