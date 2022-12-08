#include "../lib/calculus.h"
#include <iostream>


int main(int argc, char* argv[]) {
    int ans = Calc(argc, argv);
    if (ans == ERROR_VALUE) {
        return 1;
    } else {
        std::cout << ans;
        return 0;
    }
}
