#include <iostream>
#include <vector>
#include "Person.hpp"

std::vector<Person> Records; /* Array Of Records To Store Users Data */

enum class option /* Options For User */
{
    ADD = 1,
    FETCH,
    QUIT
};

/* Function to Add New Record */
void add_record(std::string &Name, int Age)
{
    Person User;

    User.userName = Name;

    User.userAge = Age;

    Records.push_back(User);
}

/* Function to Search for ID */
void fetch_record(int userId)
{
    if (userId < Records.size())
    {
        std::cout << "User Name: " << Records[userId].userName << "\n";
        std::cout << "User Age: " << Records[userId].userAge << "\n";
    }
    else
    {
        std::cout << "UserID doesn't Exist \n";
    }
}

std::istream &operator>>(std::istream &in, option &op) /* operator >> overloading Function */
{
    int result = DEFAULT;

    in >> result;

    op = static_cast<option>(result);

    return in;
}

int main(void)
{
    option opt = option::QUIT;
    bool is_Running = true;
    std::string name;
    int age = DEFAULT;
    int user_id = DEFAULT;

    std::cout << "User SignUp Application \n\n";

    while (is_Running)
    {
        std::cout << "\nPlease Select an Option \n";
        std::cout << "1. Add Record \n";
        std::cout << "2. Fetch Record \n";
        std::cout << "3. Quit \n";

        std::cout << "Enter Option: ";
        std::cin >> opt;

        switch (opt)
        {
        case option::ADD:
            std::cout << "\nAdd User. Please Enter User Name and Age \n";
            std::cout << "UserName: ";
            std::cin >> name;
            std::cout << "UserAge: ";
            std::cin >> age;
            add_record(name, age);
            std::cout << "\nUser Record Added Successfully\n";
            break;

        case option::FETCH:
            std::cout << "\nPlease Enter User ID\n";
            std::cout << "UserID: ";
            std::cin >> user_id;
            fetch_record(user_id);
            break;

        case option::QUIT:
            is_Running = false;
            break;

        default:
            /* Do Nothing */
            break;
        }
    }
    return DEFAULT;
}