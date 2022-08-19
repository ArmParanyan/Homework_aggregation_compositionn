#include <string>

#include "Person.h"


void Name::set_name(std::string name) {
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
    m_name = name;
}

std::string Name::get_name() {
    return m_name;
}


void Person::set_age(int age) {
    if (age < 0) {
        std::cout << "invalid age ";
        return;
    }
    m_age = age;
}

int Person::get_age() {
    return m_age;
}

void Person::set_person_name(std::string name) {
    person_name.set_name(name);
}

std::string Person::get_person_name() {
    return person_name.get_name();
}