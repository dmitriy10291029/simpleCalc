#pragma once

#include <iostream>
#include <string>

#define ERROR_VALUE INT32_MIN

int PrintError();

bool IsNumber(std::string str);

int Calc(int argc, char* argv[]);
