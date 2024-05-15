#ifndef PERSON_H
#define PERSON_H

#pragma once

#include <string>

constexpr int DEFAULT = 0 ; /* Default Integer Value */


/* Create Class For user */
class Person
{
    public:
        /* Variables */    
        std::string userName ;
        int userAge = DEFAULT ;
};

#endif