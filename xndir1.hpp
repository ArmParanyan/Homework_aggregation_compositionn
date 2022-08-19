// #ifndef XNDIR_1_HPP
// #define XNDIR_1_HPP

#include "xndir1.h"

Mlass::Mlass(std::string name, std::string surname, int age) {
    this->name = name;
    this->surname = surname;
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

Mlass& Mlass::operator=(const Mlass&& oth) {
    if (this != )
}

// #endif //XNDIR_1_HPP