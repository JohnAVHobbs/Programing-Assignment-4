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
#include "Manager.h"
#include "Employee.h"
#include <iostream>
#include<string>

Manager::Manager(string theName, double theWage, double theHours,
                  double theBonus):Employee(theName, theWage, theHours)
{
  bonus = theBonus;
}
//a function to calculate a manager's pay
double Manager::calcPay() const
{
  double pay = this->Employee::calcPay();
  return pay + bonus;
}
