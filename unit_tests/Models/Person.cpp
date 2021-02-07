#include "Person.hpp"

Person::Person()
{
    name = NULL;
    family = NULL;
    age = 0;
    sex = NULL;
}

std::string Person::get_name()
{
    return name;
}

void Person::set_name(std::string name)
{
    this->name = name;
}

std::string Person::get_family()
{
    return family;
}

void Person::set_family(std::string family)
{
    this->family = family;
}

int Person::get_age()
{
    return age;
}

void Person::set_age(int age)
{
    this->age = age;
}

SEX Person::get_sex()
{
    return sex;
}
