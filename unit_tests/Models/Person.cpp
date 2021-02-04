#include "Person.hpp"
#include <iostream>

class Person : public Person {
public:
    // Constructor
    Person(std::string Name, std::string Family, int Age, SEX Sex) {
        name = Name;
        family = Family;
        age = Age;
        sex = Sex;
    }

    std::string get_name() {
        return name;
    }

    void set_name(std::string name) {
        name = name;
    }

    std::string get_family() {
        return family;
    }

    void set_family(std::string family) {
        family = family;
    }

    int get_age() {
        return age;
    }

    void set_age(int age) {
        age = age;
    }

    SEX get_sex() {
        return sex;
    }
};