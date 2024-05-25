#include <iostream>
#include <string>
#include <cctype>

#include "./includes/cli.h"
#include "./includes/calculator.h"

void calculate(int x, int y, std::string op);
std::string toLower(const std::string& str);

int main(int argc, char* argv[]){
    int x = CLI::scan_int("-x", argc, argv);
    int y = CLI::scan_int("-y", argc, argv);

    std::string op = CLI::scan_string("-operator", argc, argv);

    return 0;
}

void calculate(int x, int y, std::string op){
    if(toLower(op) == "add"){
        return;
    }

    if(toLower(op) == "addition"){
        return;
    }

    if(toLower(op) == "plus"){
        return;
    }

    if(toLower(op) == "sub"){
        return;
    }

    if(toLower(op) == "subtraction"){
        return;
    }

    if(toLower(op) == "minus"){
        return;
    }

    if(toLower(op) == "mul"){
        return;
    }

    if(toLower(op) == "multiplication"){
        return;
    }

    if(toLower(op) == "multiply"){
        return;
    }

    if(toLower(op) == "div"){
        return;
    }

    if(toLower(op) == "divide"){
        return;
    }

    if(toLower(op) == "division"){
        return;
    }


    if(toLower(op) == "mod"){
        return;
    }

    if(toLower(op) == "modolus"){
        return;
    }
    std::cout << "Cant calculate the values no operator assigned" << '\n';
}

std::string toLower(const std::string& str) {
    std::string result;
    for (char c : str) {
        result += std::tolower(c);
    }
    return result;
}