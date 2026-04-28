#include <iostream>
#include "Teacher.h"

using namespace std;


Teacher::Teacher()
{
    hour = 0;
    cost = 0;
}

Teacher::Teacher(string name, float salary, int hour, float cost)
    : Employee(name, salary)
{
    this->hour = hour;
    this->cost = cost;
}

void Teacher::setHour(int hour)
{
    this->hour = hour;
}

void Teacher::setCost(float cost)
{
    this->cost = cost;
}

int Teacher::getHour() const
{
    return hour;
}

float Teacher::getCost() const
{
    return cost;
}

void Teacher::showInfo() const
{
    cout << "\n====================\n";
    Employee::showInfo();
    cout << "Hour: " << hour << endl;
    cout << "Cost: " << cost << endl;
    cout << "\n====================\n";
}

float Teacher::calcSalary() const
{
    return (salary + (hour * cost)) * 0.78;
}