#pragma once
#include "Employee.h"

class Manager : public Employee {
protected:
    int perc;
    float sales;
public:
    Manager();
    Manager(string name, float salary, int perc, float sales);
    void setPerc(int perc);
    void setSales(float sales);

    int getPerc()const;
    float getSales()const;

    virtual void showInfo()const override;
    virtual float calcSalary()const override;

};