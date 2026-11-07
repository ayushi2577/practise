#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mathfuncs.h"
#include "randfuncs.h"

int main()
{
    srand(time(0));
    std::cout << "Calculator\n";
    std::cout << "6 + 3 = " << add(6, 3) << "\n";
    std::cout << "6 - 3 = " << sub(6, 3) << "\n";
    std::cout << "6 * 3 = " << mul(6, 3) << "\n";
    std::cout << "6 / 3 = " << divide(6, 3) << "\n";
    std::cout << "coin: " << flip_coin() << "\n";
    std::cout << "d6:   " << roll_d6() << "\n";
    std::cout << "d10:  " << roll_d10() << "\n";
    return 0;
}
