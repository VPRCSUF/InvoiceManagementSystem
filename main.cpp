#include <iostream>

void install() {

    std::cout << "install function";
    
}

void warehouse() {

    std::cout << "warehouse function";

}

int main(int argc, char const *argv[]) {

    int user;
    
    std::cout << std::endl << "1. Install\n" << std::endl
              << "2. Warehouse\n" << std::endl;

    std::cin >> user;

    if (user > 2) {

        std::cout << "Invalid input.";

    } else if (user == 1) {

        install();

    } else {

        warehouse();

    }

    return 0;
}
