#include <iostream>
#include "..\Person.hpp"

void constructor_test();
void default_constructor_test();

void get_name_test();
void set_name_test();

void get_family_test();
void set_family_test();

void get_sex_test();

void get_age_test();
void set_age_test();

void cout_test();
void cin_test();

int main()
{
    cout_test();
    cin_test();

    constructor_test();
    default_constructor_test();

    get_name_test();
    set_name_test();

    get_family_test();
    set_family_test();

    get_sex_test();

    return 0;
}

void constructor_test()
{
    Person p("pooria", "azami", 19, SEX::MAN);

    std::cout << p << std::endl;
}

void default_constructor_test()
{
}

void get_name_test()
{
}
void set_name_test()
{
}

void get_family_test()
{
}
void set_family_test()
{
}

void get_sex_test()
{
}

void get_age_test()
{
}
void set_age_test()
{
}

void cout_test()
{
}
void cin_test()
{
}