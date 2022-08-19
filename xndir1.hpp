#include "xndir1.h"

Mlass::Mlass(std::string name, std::string surname, int age) {
    if (name[0] >= 'A' && name[0] <= 'Z') {
        for (int i = 1; i < name.size(); ++i) {
            if (name[i] < 'a' || name[i] > 'z') {
                std::cout << "invalid name type:";
                return;
            } 
        }
    } else  if (name[0] < 'A' || name[0] > 'Z') {
        std::cout << "invalid name type:";
        return;
    }
    this->name = name;

    if (surname[0] >= 'A' && surname[0] <= 'Z') {
        for (int i = 1; i < surname.size(); ++i) {
            if (surname[i] < 'a' || surname[i] > 'z') {
                std::cout << "invalid name type:";
                return;
            } 
        }
    } else  if (surname[0] < 'A' || surname[0] > 'Z') {
        std::cout << "invalid name type:";
        return;
    }
    this->surname = surname;

    if (age < 0 || age > 100) { 
        std::cout << "invalid age: ";
        return;
    }
    this->age = age;
}

Mlass::Mlass(Mlass&& rhs) {
    name = rhs.name;
    surname = rhs.name;
    age = rhs.age;

    rhs.name = {""};
    rhs.surname = {""};
    rhs.age = {0};
}

std::string Mlass::get_value() {
    std::string ret = {};
    ret += name;
    ret += '\n';
    ret += surname;
    ret += '\n';
    ret += std::to_string(age);
    ret += '\n';

    return ret;
}

Mlass& Mlass::operator=(Mlass&& obj) {
if (this != &obj)
    {
        this->name = obj.name;
        this->age = obj.age;
        obj.name = {};
        obj.age = {};
    }
    return *this;
}
