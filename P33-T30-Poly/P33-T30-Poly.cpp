#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"

int main()
{
    Employee a("Saphonova Veronika", 15'000);
    a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;
    cout << endl;

    Teacher b("Savchenko Daniil", 10'000, 20, 500);
    b.showInfo();
    cout << "Total salary: " << b.calcSalary() << endl;
    cout << endl;

    Manager c("Ryzhko Ivan", 7'000, 50, 50'000);
    c.showInfo();
    cout << "Total salary: " << c.calcSalary() << endl;
    cout << endl;

}

