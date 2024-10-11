// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int dosomething(bool x) {
#ifdef __clang__
    if (x) {
        return 42;
    }
    else {
        return 42;
    }
#else
    return 0;
#endif
}

int main(int argc, char** argv)
{
    int* p = nullptr;
    if (argc > 0 && argv[0] == std::string("untitles")) {
        std::cout << "XX\n";
    }
    std::cout << "Hello World!\n" << dosomething(false);
    return *p;
}


