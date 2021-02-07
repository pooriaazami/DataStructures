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
    if (age > 0)
        this->age = age;
        }

SEX Person::get_sex()
{
    return sex;
}

std::ostream Person::&operator<<(std::ostream &out, const Person person)
{
    out << "Person("
        << "name=" << person.get_name() << "\tfamily=" << person.get_family() << "\tage=" << person.get_age() << ;

    cout << "\tsex=";
    if (person.get_sex == SEX::MAN)
        cout << "man";
    else
        cout << "woman";

    cout << ")";
}

std::istream Person::&operator>>(std::istream &in, Person person)
{
    in >> person.name >> Person.famiy >> Person.age;

    int check;
    in >> check;

    if (check == 1)
        person.sex = SEX::MAN;
    else
        person.sex = SEX::WOMAN;
}
