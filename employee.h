#include <string>

class Employee
{
public:
    Employee();
    ~Employee() {}

public:
    void set_data(std::string&, long&);
    std::string putdata();
    static long employee_id;
private:
    std::string employee_name;
    
};