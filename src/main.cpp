#include <iostream>

#include "header.hpp"

namespace spore::codegen::example
{
    struct my_disabled_struct;
}

int main()
{
    using namespace spore::codegen::example;

    std::cout << "my_struct enabled=" << my_type_traits<my_struct>::enabled << std::endl;
    std::cout << "my_other_struct enabled=" << my_type_traits<my_other_struct<int>>::enabled << std::endl;
    std::cout << "my_disabled_struct enabled=" << my_type_traits<my_disabled_struct>::enabled << std::endl;
    
    return 0;
}
