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
        string get_Dep(){return Dep;}

    protected:

    private:
        int ID;
        string name;
        string phone;
        string email;
        string JobTitle;
        string Dep;

};

#endif // EMPLOYEE_H
