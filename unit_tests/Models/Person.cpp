#include "Person.hpp"

Person::Person()
{
    name = "";
    family = "";
    age = 0;
    sex = SEX::MAN;
}

std::string Person::get_name()
{
    return name;
}

std::string Person::get_name() const
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

std::string Person::get_family() const
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

int Person::get_age() const
{
    return age;
}

void Person::set_age(int age)
{
    if (age > 0)
        this->age = age;
}

SEX Person::get_sex()
{
    return sex;
}

SEX Person::get_sex() const
{
    return sex;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person("
        << "name=" << person.get_name() << "\tfamily=" << person.get_family() << "\tage=" << person.get_age();

    out << "\tsex=";
    if (person.get_sex() == SEX::MAN)
        out << "man";
    else
        out << "woman";

    out << ")";

    return out;
}

std::istream &operator>>(std::istream &in, Person &person)
{
    in >> person.name >> person.family >> person.age;

    int check;
    in >> check;

    if (check == 1)
        person.sex = SEX::MAN;
    else
        person.sex = SEX::WOMAN;

    return in;
}
