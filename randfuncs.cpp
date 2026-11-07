#include <cstdlib>
#include "randfuncs.h"
const char* flip_coin() { return (rand() % 2) ? "heads" : "tails"; }
int roll_d6() { return rand() % 6 + 1; }
int roll_d10() { return rand() % 10 + 1; }
