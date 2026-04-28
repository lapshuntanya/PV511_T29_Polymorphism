#include"Employee.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    Employee Diana("Diana", 15'000);
    Diana.showInfo();
    cout << "Total: " << Diana.calcSalary() << endl;

    
    return 0;
}