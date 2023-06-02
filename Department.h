#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
using namespace std;


class Department
{
    public:
        void getdepartment();
        void print();
        int get_ID(){return department_id;}
        string Getname();
    protected:
        int department_id;
        string department_name;
        int counter=0;
};

#endif // DEPARTMENT_H
