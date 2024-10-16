#include "Employee.h"

int main()
{
    Employee a("Saphonova Veronika", 15'000);
    a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;
}

