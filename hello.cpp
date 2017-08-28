#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "What's your first name?" << std::endl;
    std::cin >> input;
    std::cout << "Hello, " << input << std::endl;
    return 0;
}