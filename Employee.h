#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include"Department.h"
#include<string>
using namespace std;

class Employee
{
    public:
        Employee();
        virtual ~Employee();
        virtual void getData();
        virtual string ShowData();
        virtual double getSalary()=0;
        int get_ID();
        void Setdepartment(Department *d);
        Department getDepart();


    protected:

    private:
        int ID;
        string name;
        string phone;
        string email;
        string JobTitle;
        Department *em_depart;

};

#endif // EMPLOYEE_H
