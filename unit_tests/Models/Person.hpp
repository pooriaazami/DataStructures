#pragma once

#include <iostream>

enum class SEX
{
    MAN,
    WOMAN
};

class Person
{
private:
    std::string name;
    std::string family;
    int age;

    const SEX sex;

public:
    Person(std::string name, std::string family, int age, SEX sex) : name(name), family(family), age(age), sex(sex){};

    std::string get_name();
    void set_name(std::string name);

    std::string get_family();
    void set_family(std::string family);

    int get_age();
    void set_age(int age);

    SEX get_sex();

    friend std::ostream &operator<<(std::ostream &out, const Person person);
    friend std::istream &operator>>(std::istream &in, Person person);
};