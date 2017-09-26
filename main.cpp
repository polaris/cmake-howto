#include "config.h"
#include <iostream>

int main() {
    const auto foo = [](){
        std::cout << Hello << ", " << World << "!\n";
    };
    foo();
}