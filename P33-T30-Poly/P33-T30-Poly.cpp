#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"
#include <vector>

int main()
{
    Employee a("Saphonova Veronika", 15'000);
    //a.showInfo();
    //cout << "Total salary: " << a.calcSalary() << endl;
    //cout << endl;

    Teacher b("Savchenko Daniil", 10'000, 20, 500);
    //b.showInfo();
    //cout << "Total salary: " << b.calcSalary() << endl;
    //cout << endl;

    Manager c("Ryzhko Ivan", 7'000, 50, 50'000);
    //c.showInfo();
    //cout << "Total salary: " << c.calcSalary() << endl;
    //cout << endl;

    vector<Employee*> itStep = { &a, &b, &c,
            new Employee("Rits Ivan", 17'500),
            new Manager("Povorinskiy Ehor", 7'000, 25, 100'000),
        new Manager("Olkhovskiy Vladyslav", 7'000, 15, 200'000),
        new Teacher("Lukashov Vladyslav", 15'000, 50, 1'000)
    };

    itStep.push_back(new Teacher("Kovtun Kyrylo", 27'000, 10, 500));
    //-------------------------------------------------------

    //-------------------------------------------------------
    //clear
    for (int i = 3; i < itStep.size(); i++)  {
        delete itStep[i];
    }

}

