#pragma once

namespace spore::codegen::example
{
    template <typename value_t, typename void_t = void>
    struct type_traits
    {
        static constexpr bool enabled = false;
    };
}