#include <iostream>

#include "club.h"

Member::Member(std::string name, std::string surname, int age, int id) {
    this->m_name = name;
    this->m_surname = surname;
    this->m_age = age;
    this->m_id = id;
}

void Member::set_name(std::string name) {
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
    m_name = name;
}

std::string Member::get_name() {
    return m_name;
}

void Member::set_surname(std::string surname) {
    if (surname[0] >= 'A' && surname[0] <= 'Z') {
        for (int i = 1; i < surname.size(); ++i) {
            if (surname[i] <= 'a' || surname[i] >= 'z') {
                std::cout << "invalid name type:";
                return;
                } 
            }
        } else  if (surname[0] <= 'A' ||surname[0] >= 'Z') {
            std::cout << "invalid name type:";
            return;
        }
    m_surname = surname;
}

std::string Member::get_surname() {
    return m_surname;
}

void Member::set_age(int age) {
    if (age <= 18 && age >= 90) {
        std::cout << "invalid age: ";
        return;
    }
    m_age = age;
}

int Member::get_age() {
    return m_age;
}

void Member::set_id(int id) {
    if (id < 0 && id > 500) {
        std::cout << "invalid id";
        return;
    }
    m_id = id;
}

int Member::get_id() {
    return m_id;
}

///// CLUB ////

Club::Club(std::string name, int id, Member* member) {
    club_name = name;
    club_id = id;
    club_member = member;
}

void Club::set_club_name(std::string name) {
    if (name[0] >= 'A' && name[0] <= 'Z') {
        for (int i = 1; i < name.size(); ++i) {
            if (name[i] <= 'a' || name[i] >= 'z') {
                std::cout << "invalid name type:";
                return;
                } 
            }
        } else  if (name[0] <= 'A' ||name[0] >= 'Z') {
            std::cout << "invalid name type:";
            return;
        }
    club_name = name;
}

void Club::set_club_id(int id) {
      if (id < 0 && id > 500) {
        std::cout << "invalid id";
        return;
    }
    club_id = id;
}

int Club::get_club_id() {
    return club_id;
}

void Club::club_member_details() {
    std::cout << "club name: " << club_name << std::endl;
    std::cout << "club id: " << club_id << std::endl;
    std::cout << "club member name: " << club_member->get_name() << std::endl;
    std::cout << "club member surname: " << club_member->get_surname() << std::endl;
    std::cout << "club member age: " << club_member->get_age() << std::endl;
    std::cout << "club member id: " << club_member->get_id() << std::endl;
}
