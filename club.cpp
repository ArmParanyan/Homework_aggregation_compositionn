#include <iostream>

#include "club.hpp"


int main() {

    Member object("Armen", "Paranyan", 19, 452);
    Club obj("dinamo", 245, &object);
    obj.club_member_details();

    return 0;
}