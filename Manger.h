#ifndef MANGER_H
#define MANGER_H
#include"Employee.h"
#include<iostream>
using namespace std;

class Manger : public Employee
{
    public:
        double addHours();
        double addBonus();
        void getData();
        string ShowData();
        double getSalary();

    private:
        double rate;
        double salary;
        double Bonus;
        double Hours;
};

#endif // MANGER_H
