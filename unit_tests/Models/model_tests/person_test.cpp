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
    std::cout << "{start}"
              << "\tconstructor_test()\n";
    Person p("pooria", "azami", 19, SEX::MAN);

    std::cout << p << std::endl;

    std::cout << "{end};" << std::endl;
}

void default_constructor_test()
{
    std::cout << "{start}"
              << "\tdefault_constructor_test()\n";
    std::cout << "p1:\n";
    Person p1;
    std::cout << p1 << std::endl;

    std::cout << "p2:\n";
    Person p2();
    std::cout << p2 << std::endl;

    std::cout << "p[]:\n";
    Person p[10];
    for (int i = 0; i < 10; i++)
        std::cout << p[i] << std::endl;
    std::cout << "{end};" << std::endl;
}

void get_name_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);

    if (p.get_name() == "pooria")
        std::cout << "get_name() is working correctly" << std::endl;
    else
        std::cout << "something's wrong with get_name_test()" << std::endl;

    std::cout << "{end};" << std::endl;
}
void set_name_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);
    p.set_name("name");

    if (p.get_name() == "name")
        std::cout << "set_name_test() is working correctly" << std::endl;
    else
        std::cout << "something's wrong with set_name_test()" << std::endl;

    std::cout << "{end};" << std::endl;
}

void get_family_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);

    if (p.get_family() == "azami")
        std::cout << "get_family_test() is working correctly" << std::endl;
    else
        std::cout << "something's wrong with get_family_test()" << std::endl;
    std::cout << "{end};" << std::endl;
}
void set_family_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);
    p.set_family("family");

    if (p.get_family() == "family")
        std::cout << "set_family_test() is working correctly" << std::endl;
    else
        std::cout << "something's wrong with set_family_test()" << std::endl;

    std::cout << "{end};" << std::endl;
}

void get_sex_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);

    if (p.get_sex() == SEX::MAN)
        std::cout << "get_sex_test() is working correctly" << std::endl;
    else
        std::cout << "something's wrong with get_sex_test()" << std::endl;

    std::cout << "{end};" << std::endl;
}

void get_age_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);

    if (p.get_age() == 19)
        std::cout << "get_age_test() is working correctly" << std::endl;
    else
        std::cout << "something's wrong with get_age_test()" << std::endl;

    std::cout << "{end};" << std::endl;
}
void set_age_test()
{
    std::cout << "{start}\t"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);

    p.set_age(20);
    if (p.get_age() == 20)
        std::cout << "set_age_test() is working correctly --STEP 1" << std::endl;
    else
        std::cout << "something's wrong with set_age_test() -- STEP 1" << std::endl;

    p.set_age(0);
    if (p.get_age() == 0)
        std::cout << "set_age_test() is working correctly --STEP 2" << std::endl;
    else
        std::cout << "something's wrong with set_age_test() -- STEP 2" << std::endl;

    p.set_age(-20);
    if (p.get_age() == 0)
        std::cout << "set_age_test() is working correctly --STEP 3" << std::endl;
    else
        std::cout << "something's wrong with set_age_test() -- STEP 3" << std::endl;

    std::cout << "{end};" << std::endl;
}

void cout_test()
{
    std::cout << "{start}\tcout_test()"
              << "";
    Person p("pooria", "azami", 19, SEX::MAN);
    std::cout << "{end};" << std::endl;
}
void cin_test()
{
    std::cout << "{start}\tcin_test()" << std::endl;

    Person p;
    std::cout << "Pleaes enter data: (name, family, age, sex(1=man, 0=woman))" << std::endl;

    std::cin >> p;

    std::cout << p << std::endl;
    std::cout << "{end};" << std::endl;
}