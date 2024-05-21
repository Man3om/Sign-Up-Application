#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
constexpr int DEFAULT = 0;

class Person
{
private:
    /* Variables */
    std::string userName;
    int userAge = DEFAULT;

public:
    Person(std::string Name, int Age); /* Constructor*/

    /* Friend Functions */
    friend void add_record(std::string &Name, int Age);
    friend void fetch_record(int userId);
};

#endif