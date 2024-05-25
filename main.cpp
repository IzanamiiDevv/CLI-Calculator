#include <iostream>
#include <string>

#include "./includes/cli.h"
#include "./includes/calculator.h"

int main(int argc, char* argv[]){
    int a = CLI::scan_int("-a", argc, argv);
    int b = CLI::scan_int("-b", argc, argv);

    std::string op = CLI::scan_string("-operator", argc, argv);
    

    return 0;
}