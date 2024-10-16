#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"
#include <typeinfo>
#include <vector>
#include <algorithm>

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

    for (int i = 0; i < itStep.size(); i++)    {
        itStep[i]->showInfo(); 
        cout << endl;
    }
    cout << "--------------------------------------------\n";
   
    cout << "List of Managers:\n";
    for (int i = 0; i < itStep.size(); i++)
    {
        if (typeid(*itStep[i]) == typeid(Manager)){
            cout << "\t" << itStep[i]->getName() << endl;
        }
    }
    cout << "--------------------------------------------\n";
    cout << "Teachers:\n";
    for (int i = 0; i < itStep.size(); i++)
    {
         Teacher* p = dynamic_cast<Teacher*>(itStep[i]);
         if (p != nullptr) {
             cout << "\t Name:     " << p->getName() << endl;
             cout << "\t Old cost: " << p ->getCost() << " UAH" << endl;
             p->setCost(p->getCost() + 100);
             cout << "\t New cost: " << p->getCost() << " UAH" << endl;
             cout << endl;
         }
    }
    cout << "--------------------------------------------\n";
    cout << "Sorting by total salary:\n\n";
    sort(itStep.begin(), itStep.end(), [](Employee* a, Employee* b) {
        return a->calcSalary() > b->calcSalary();
        });

    for (auto item: itStep) {
        cout << item->getName() << " " << item->calcSalary() << "\n";
    }

    //-------------------------------------------------------
    /*
    //clear
    for (int i = 3; i < itStep.size(); i++)  {
        delete itStep[i];
    }*/
}

