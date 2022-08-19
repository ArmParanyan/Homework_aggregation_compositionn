#include <string>

class Member
{
public:
    Member(std::string, std::string, int, int);
    ~Member() {}

public:
    void set_name(std::string);
    std::string get_name();
    void set_surname(std::string);
    std::string get_surname();
    void set_age(int);
    int get_age();
    void set_id(int);
    int get_id();

private:
    std::string m_name;
    std::string m_surname;
    int m_age;
    int m_id;
};


class Club
{
public:
    Club(std::string, int, Member*);
    ~Club() {}

public:
    void set_club_name(std::string);
    std::string get_club_name();
    void set_club_id(int);
    int get_club_id();
    void club_member_details();

private:
    Member* club_member;
    std::string club_name;
    int club_id;
};

