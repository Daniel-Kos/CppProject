#include<iostream>
int numbers = 2147483647;

int main() {
    std::cout << "Was: " << numbers << std::endl;
    std::cout << "It has become: " << numbers + 1 << std::endl;
    std::cout << "Doubled: " << numbers * 2 << std::endl;
}