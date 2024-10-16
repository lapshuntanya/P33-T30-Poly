#pragma once
#include "Employee.h"

class Teacher :  public Employee
{
protected:
	int hours;
	int cost;
public:
	Teacher(); 
	Teacher(string name, float salary, int hours, int cost);

	void setHours(int hours);
	void setCost(int cost);
	int getHours()const;
	int getCost ()const;

	void showInfo()const;
	float calcSalary()const;
};

