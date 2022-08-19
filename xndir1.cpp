#include <iostream>

#include "xndir1.hpp"

int main() {
    Mlass obj1 ("Armen", "Paranyan", 18);
    std::cout << obj1.get_value();
    Mlass obj2 ("Valer", "Hovhanisyan", 18);
    obj1 = std::move(obj2);
}
