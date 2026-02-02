#include <iostream>
#include "parser.h"
#include "codegen.h"

int main(int argc, char *argv[]) {
    fprintf(stderr, ">>> ");
    getNextToken();
    InitializeModuleAndManagers();
    MainLoop();
    return 0;
}