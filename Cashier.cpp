#include "Cashier.h"

Cashier::Cashier()
{
    //ctor
}

Cashier::~Cashier()
{
    //dtor
}
void Cashier::getData()
{
    Employee::getData();
    cout<<"\nEnter Bouns: ";
    cin>>Bouns;
    cout<<"\nEnter Rate: ";
    cin>>rate;
    cout<<"\nEnter Hours Worked: ";
    cin>>Hours;

}
void Cashier::ShowData()
{
    Employee::ShowData();
    cout<<"\nBouns: "<<Bouns;
    cout<<"\nRate: "<<rate;
    cout<<"\nHours Worked: "<<Hours;
    cout<<"\nSalary: "<<((rate*Hours)+Bouns);
}
double Cashier::getSalary()
{
    return (rate*Hours)+Bouns;
}
double Cashier::addHours(double h)
{
    Hours+=h;
    return Hours;
}
double Cashier::addBonus(double b)
{
    Bouns+=b;
    return Bouns;
}
