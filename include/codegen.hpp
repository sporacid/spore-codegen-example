#pragma once

#ifndef SPORE_CODEGEN
#    error "cannot include codegen.hpp outside codegen"
#endif

#include "type_traits.hpp"

namespace spore::codegen::example
{
    template <typename value_t>
    struct type_traits<value_t>
    {
        static constexpr bool enabled = true;
    };
}