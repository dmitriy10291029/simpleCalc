#include "calculus.h"



int PrintError() {
    std::cout << "wrong input\n";
    return ERROR_VALUE;
}

bool IsNumber(std::string str) {
    if (str.size() == 0) 
        return false;
    if (str[0] != '+' && str[0] != '-' && !(str[0] <= '9' && str[0] >= '0' ))
        return false;
    for (int i = 1; i < str.length(); ++i)
        if (!(str[i] <= '9' && str[i] >= '0'))
            return false;
    return true;
}

int Calc(int argc, char* argv[]) {
    if (argc != 4) return PrintError();

    int a = 0, b = 0;
    if (IsNumber(argv[1]) && IsNumber(argv[2])) {
        a = std::stoi(argv[1]);
        b = std::stoi(argv[2]);
    } else return PrintError();
    std::string arg = argv[3];
    if (arg == "+") return a + b;
    if (arg == "-") return a - b;
    if (arg == "*") return a * b;
    if (arg == "/") return a / b;
    return PrintError();
}
