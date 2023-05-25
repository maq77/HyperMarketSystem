#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
using namespace std;


class Department
{
    public:
        Department();
        virtual ~Department();
        void getdepartment();
        void print();
        void add_department();
        friend istream& operator>>(istream& in,Department& d);

    protected:

    private:
        int department_id;
        string department_name;
        int counter=0;
        Department *dep_arr;
};

#endif // DEPARTMENT_H
