#include <string>

class Name
{
public: 
    void set_name(std::string);
    std::string get_name();
private:
    std::string m_name;
};

class Person
{
public:
    void set_age(int);
    int get_age();
    void set_person_name(std::string);
    std::string get_person_name();

private:
    Name person_name;
    int m_age;
};