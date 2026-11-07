#include <iostream>
#include "mathfuncs.h"

int main()
{
    std::cout << "Calculator\n";
    std::cout << "6 + 3 = " << add(6, 3) << "\n";
    std::cout << "6 - 3 = " << sub(6, 3) << "\n";
    std::cout << "6 * 3 = " << mul(6, 3) << "\n";
    std::cout << "6 / 3 = " << divide(6, 3) << "\n";
    return 0;
}
