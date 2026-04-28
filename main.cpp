#include"Employee.h"
#include "Manager.h"
#include "Teacher.h"
#include <vector>
#include <typeinfo>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    Employee x1("Diana", 15'000);
   // Diana.showInfo();
    //cout << "Total: " << Diana.calcSalary() << endl;

    Manager x2("Max", 40000, 30, 90000);
   // x2.showInfo();
   // cout << "Total: " << x2.calcSalary() << endl;

    Teacher x3("Anton", 5000, 36, 30);
   // x3.showInfo();
   // cout << "Total: " << x3.calcSalary() << endl;


  vector<Employee*> company = {
   &x1, &x2, &x3,
   new Manager("Mykola", 4'000, 50, 100'000),
   new Teacher("Olena", 20'000, 50, 1000 )
  };


  for (int i  = 0; i < company.size(); i++) {
   //company[i]->showInfo();
   cout << i + 1 << ". " << company[i]->getName() << endl;
  }

cout << "=====================\n";
 //Підвищити відсоток для менеджерів + 5%
 for (int i  = 0; i < company.size(); i++) {
  // cout << company[i] << endl; // address
  // cout << *company[i] << endl; // object by address

  //cout << typeid(*company[i]).name() << endl; // name of type
   if (typeid(*company[i]) == typeid(Manager)) {
    cout  << company[i]->getName() << endl;
    //((Manager *)company[i])->setPerc(  ((Manager *)company[i])->getPerc() + 5   );

    Manager * p = dynamic_cast< Manager *>(company[i]);
    p->setPerc( p->getPerc() + 5);
    p->showInfo();
   }
 }

 // 2 спосіб
 for (int i  = 0; i < company.size(); i++) {
     Manager * p = dynamic_cast< Manager *>(company[i]);
      if (p != nullptr) {
          p->setPerc( p->getPerc() + 5);
          p->showInfo();
      }
 }


    return 0;
}