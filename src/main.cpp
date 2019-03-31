#include <exception>
#include <iostream>

int main() {
#if defined(__GLIBCXX__)
    std::set_terminate(__gnu_cxx::__verbose_terminate_handler);
#endif

    std::cout << "Throwing exception" << std::endl;
    throw std::runtime_error("This is message of the exception");
}
