#include <string>

class Mlass
{
public:
    Mlass() = delete;
    Mlass(std::string, std::string, int);
    Mlass(Mlass&&);
    Mlass& operator=(Mlass&&);
public:
    std::string get_value();

private:
    std::string name;
    std::string surname;
    int age;
};
