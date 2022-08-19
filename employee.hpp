#include <iostream>
#include <string>

 #include "employee.h"

long Employee::employee_id = 0;

Employee::Employee() {
    employee_name = "";
}

void Employee::set_data(std::string& name, long& id) {
    if (name[0] >= 'A' && name[0] <= 'Z') {
        for (int i = 1; i < name.size(); ++i) {
            if (name[i] <= 'a' || name[i] >= 'z') {
                std::cout << "invalid name type:";
                return;
                } 
            }
        } else  if (name[0] <= 'A' || name[0] >= 'Z') {
            std::cout << "invalid name type:";
            return;
        }
        employee_name = name;
  
    if (id > 0) {
        employee_id = id;
    } else {
        std::cout << "invalid id" << std::endl;
        return;
    }
}

std::string Employee::putdata() {
    std::string return_value = {""};
    return_value += employee_name;
    return_value += '\n';
    return_value += std::to_string(employee_id);
    return_value += '\n';

    return return_value;
}