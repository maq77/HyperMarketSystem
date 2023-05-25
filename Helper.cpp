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
void Helper::ShowData()
{
    Employee::ShowData();
    cout<<"\nTarget: "<<Target;
    cout<<"\nRate: "<<rate;
    cout<<"\nBouns: "<<Bouns;
    cout<<"\nSalary: "<<((Target*rate)+Bouns)<<endl;
}
