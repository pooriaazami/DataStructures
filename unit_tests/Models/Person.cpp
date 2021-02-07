#include "Person.hpp"

class Person : public Person
{
public:
    // Constructor

    Person()
    {
        name = NULL;
        family = NULL;
        age = 0;
        sex = NULL;
    }

    std::string get_name()
    {
        return name;
    }

    void set_name(std::string name)
    {
        this->name = name;
    }

    std::string get_family()
    {
        return family;
    }

    void set_family(std::string family)
    {
        this->family = family;
    }

    int get_age()
    {
        return age;
    }

    void set_age(int age)
    {
        this->age = age;
    }

    SEX get_sex()
    {
        return sex;
    }

private:
    std::string name;
    std::string family;
    std::string age;
    SEX sex;
};
