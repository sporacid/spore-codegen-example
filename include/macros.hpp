#pragma once

#ifdef SPORE_CODEGEN
#    define GENERATED(File) "codegen.hpp"
#    define ATTRIBUTE(...) [[clang::annotate(#__VA_ARGS__)]]
#else
#    define GENERATED(File) File
#    define ATTRIBUTE(...)
#endif