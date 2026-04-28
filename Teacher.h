#pragma once
#include "Employee.h"

class Teacher : public Employee
{
protected:
    int hour;
    float cost;

public:
    Teacher();
    Teacher(string name, float salary, int hour, float cost);

    void setHour(int hour);
    void setCost(float cost);

    int getHour() const;
    float getCost() const;

    virtual void showInfo() const override;//override = перевизначити
    virtual float calcSalary() const override;
};