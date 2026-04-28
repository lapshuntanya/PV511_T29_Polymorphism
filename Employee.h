//
// Created by Tetiana Perederii on 28.04.2026.
//

#ifndef PV511_T29_POLYMORPHISM_EMPLOYEE_H
#define PV511_T29_POLYMORPHISM_EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float salary;
public:
    Employee();
    Employee(string name, float salary);

    void setName(string name);
    void setSalary(float salary);
    string getName()const;
    float getSalary()const;

    void showInfo()const;
    float calcSalary()const;
};



#endif //PV511_T29_POLYMORPHISM_EMPLOYEE_H
