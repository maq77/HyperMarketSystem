#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
        Employee();
        virtual ~Employee();
        virtual void getData();
        virtual void ShowData();
        virtual double getSalary()=0;
        int get_ID(){return ID;}
    protected:

    private:
        int ID;
        string name;
        string phone;
        string email;
        string JobTitle;

};

#endif // EMPLOYEE_H
