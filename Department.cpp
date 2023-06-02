#include "Department.h"

void Department::getdepartment()
{
    cout<<"\nEnter Department ID : ";
    cin>>department_id;
    cout<<"\nEnter Department Name : ";
    cin>>department_name;
}
void Department::print()
{
    cout<<"\nDepartment ID : "<<department_id<<endl;
    cout<<"\nDepartment Name : "<<department_name<<endl;
}
string Department::Getname()
{
    return department_name;
}
