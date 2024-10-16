#include "Teacher.h"

Teacher::Teacher(){
    hours = 0;
    cost = 0;
}

Teacher::Teacher(string name, float salary, int hours, int cost)
    :Employee(name, salary)
{
    this->hours = hours;
    this->cost = cost;
}

void Teacher::setHours(int hours){ this->hours = hours; }
void Teacher::setCost(int cost){  this->cost = cost; }
int Teacher::getHours() const{    return hours;}
int Teacher::getCost() const{    return cost;}

void Teacher::showInfo() const{
    Employee::showInfo(); // name, salary
    cout << "Hours: " << hours << endl;
    cout << "Cost:  " << cost << " UAH" << endl;
}

float Teacher::calcSalary() const{
    return (salary + hours * cost) * 0.805;
}
