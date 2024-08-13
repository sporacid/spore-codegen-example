#include <iostream>

#include "types.hpp"

int main()
{
    using namespace spore::codegen::example;

    std::cout << "my_struct: " << type_traits<my_struct>::enabled << std::endl;
    std::cout << "my_other_struct: " << type_traits<my_other_struct<int>>::enabled << std::endl;
    std::cout << "my_disabled_struct: " << type_traits<my_disabled_struct>::enabled << std::endl;

    return 0;
}
