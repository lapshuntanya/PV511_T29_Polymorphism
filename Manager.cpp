#include "Manager.h"

Manager::Manager()
{
    perc = 5;
    sales = 0;

}

Manager::Manager(string name, float salary, int perc, float sales):Employee(name, salary)
{
    this->perc = perc;
    this->sales = sales;
}

void Manager::setPerc(int perc)
{
    this->perc = perc;
}

void Manager::setSales(float sales)
{
    this->sales = sales;
}

int Manager::getPerc() const
{
    return perc;
}

float Manager::getSales() const
{
    return sales;
}

void Manager::showInfo() const
{
    cout << "\n ===============\n";
    Employee::showInfo();
    cout << "Percent: " << perc << "%" << endl;
    cout << "Sales: " << sales << " UAH." << endl;
    cout << "\n ===============\n";
}

float Manager::calcSalary() const
{
    return (salary+(perc*sales / 100.0))*0.78;
}