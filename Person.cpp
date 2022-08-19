#include <iostream>
#include <string>
#include "Person.hpp"

int main() {
    std::string name = "Armen";
    Person obj;
    obj.set_person_name(name);
    std::cout << obj.get_person_name();
}