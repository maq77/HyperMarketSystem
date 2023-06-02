#include "Helper.h"

Helper::Helper()
{
    //ctor
}

Helper::~Helper()
{
    //dtor
}
void Helper::getData()
{
    Employee::getData();
    cout<<"\nEnter Target: ";
    cin>>Target;
    cout<<"\nEnter Rate: ";
    cin>>rate;
    cout<<"\nEnter Bouns: ";
    cin>>Bouns;
}
double Helper::getSalary()
{
    return (Target*rate)+Bouns;
}
string Helper::ShowData()
{
    return Employee::ShowData() +"\nBouns: "+to_string(Bouns)+"\nRate: "+to_string(rate)+"\nTarget: "+to_string(Target)+"\nSalary: "+to_string(((Target*rate)+Bouns));
}
