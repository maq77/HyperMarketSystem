#include "Department.h"

Department::Department()
{
    Department *dep_arr=new Department[10];
}

Department::~Department()
{
    //dtor
}
void Department::getdepartment()
{
    cout<<" enter department id : ";cin>>department_id;
    cout<<" enter department name : ";cin>>department_name;
}
void Department::print()
{
    cout<<" department id : "<<department_id<<endl;
    cout<<" department name : "<<department_name<<endl;
}
void Department::add_department()
{
    char k;
    do
    {
        cout<<" ------ enter Department number ["<<counter+1<<"]-------"<<endl;
        cin>>dep_arr[counter++];
        cout<<endl;
        cout<<" do you want to add another ? (y/n) ";cin>>k;
    }while(k!='n' && k!='N');
}
istream& operator>>(istream& in,Department& d)
{
    in>>d.department_name;
}
