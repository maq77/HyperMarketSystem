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
string Cashier::ShowData()
{
    return Employee::ShowData() +"\nBouns: "+to_string(Bouns)+"\nRate: "+to_string(rate)+"\nHours Worked: "+to_string(Hours)+"\nSalary: "+to_string(((rate*Hours)+Bouns));
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
