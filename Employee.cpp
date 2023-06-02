#include "Employee.h"

Employee::Employee()
{
    em_depart=nullptr;
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
int Employee::get_ID()
{
    return ID;
}
string Employee::ShowData()
{
    return "\nEmployee ID: "+to_string(ID)+
            "\nEmployee Name: "+name+
            "\nEmployee Phone: "+phone+
            "\nEmployee Email: "+email+
            "\nEmployee Job Title: "+JobTitle+
            ((em_depart!=nullptr)? "\nDepartment: "+em_depart->Getname():" ") ;
}
void Employee::Setdepartment(Department *d)
{
    em_depart=d;
}
Department Employee::getDepart()
{
    return *em_depart;
}
