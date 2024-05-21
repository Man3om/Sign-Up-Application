#ifndef PERSON_HPP
#define PERSON_HPP

constexpr int DEFAULT = 0; /* Default Integer Value */

/* Create Class For user */
class Person
{
private:
    /* Variables */
    std::string userName;
    int userAge = DEFAULT;

public:
    /* Friend Functions */
    friend void add_record(std::string &Name, int Age);
    friend void fetch_record(int userId);
};

#endif