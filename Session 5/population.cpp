#include <iostream>

int the_city_population;
int the_country_population;
long long earth = 8100000000; // Implicit conversion from 'long long' to 'int' changes value from 8100000000 to -48993459254
int main() {
    std::cout << "Enter the city's population: "; std::cin >> the_city_population;
    std::cout << "Enter the country's population: "; std::cin >> the_country_population;
    std::cout << "Sum: "<< the_city_population + the_country_population << std::endl;
    std::cout << "Earth population: "<< earth << std::endl;
}