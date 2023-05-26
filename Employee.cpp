#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}
void Employee::getData()
{
    cout<<"\nEnter Employee ID: ";
    cin>>ID;
    cout<<"\nEnter Employee Name: ";
    cin>>name;
    cout<<"\nEnter Employee Department: ";
    cin>>Dep;
    cout<<"\nEnter Employee Phone: ";
    cin>>phone;
    cout<<"\nEnter Employee Email: ";
    cin>>email;
    cout<<"\nEnter Employee Job Title: ";
    cin>>JobTitle;
}
void Employee::ShowData()
{
    cout<<"\nEmployee ID: "<<ID;
    cout<<"\nEmployee Name: "<<name;
    cout<<"\nEmployee Department: "<<Dep;
    cout<<"\nEmployee Phone: "<<phone;
    cout<<"\nEmployee Email: "<<email;
    cout<<"\nEmployee Job Title: "<<JobTitle;
}
