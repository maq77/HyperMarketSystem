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
    cout<<"\nEnter Employee Phone: ";
    cin>>phone;
    cout<<"\nEnter Employee Email: ";
    cin>>email;
    cout<<"\nEnter Employee Job Title: ";
    cin>>JobTitle;
}
void Employee::ShowData()
{
    cout<<"\nEnter Employee ID: "<<ID;
    cout<<"\nEnter Employee Name: "<<name;
    cout<<"\nEnter Employee Phone: "<<phone;
    cout<<"\nEnter Employee Email: "<<email;
    cout<<"\nEnter Employee Job Title: "<<JobTitle;
}
