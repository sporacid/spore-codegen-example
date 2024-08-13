#pragma once

#include "macros.hpp"
#include "type_traits.hpp"

#include GENERATED("types.generated.hpp")

namespace spore::codegen::example
{
    struct ATTRIBUTE(enabled) my_struct
    {
        int i;
    };

    template <typename value_t>
    struct ATTRIBUTE(enabled) my_other_struct
    {
        float f;
    };

    struct my_disabled_struct
    {
        double d;
    };
}

#include GENERATED("types.generated.inl")