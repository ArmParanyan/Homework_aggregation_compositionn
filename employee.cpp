#include <iostream>
#include <string>

#include "employee.hpp"

int main() {
    std::string str = "Armen";
    long id = 15;
    Employee obj;
    obj.set_data(str, id);
    std::cout << obj.putdata() ;

    return 0;
}