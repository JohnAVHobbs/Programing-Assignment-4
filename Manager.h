/*
# Author:              John Hobbs
# BannerID:            001369774
# Course:              CS 181
# Assignment:          PA4
# Date Assigned:       Monday, March 18, 2024
# Date/Time Due:       Saturday, March 30, 2024 -- 11:55 pm

# Description:         This Program will exercise Object-
                       Oriented concepts with C++
# Certification of Authenticity:
    I certify that this assignment is entirely my own work.
*/
#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED

#include "Employee.h"

class Manager:public Employee
{
  protected:
    //a variable to store a manager's bonus
    double bonus;

  public:
    Manager(string theName, double theWage, double theHours, double theBonus);
    //a function to calculate a manager's pay
    double calcPay() const;
};

#endif // MANAGER_H_INCLUDED
