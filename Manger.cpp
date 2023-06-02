#include "Manger.h"
double Manger ::addHours()
{
    int n;
    cout<<"\nEnter the hours which you want to add it ";
    cin>>n;
    Hours+=n;
    return Hours;
}
double Manger ::addBonus()
{
      int n;
    cout<<"\nEnter the Bonus which you want to add it ";
    cin>>n;
    Bonus+=n;
    return Bonus;

}
double Manger ::getSalary()
{
    salary=Hours*rate+Bonus;
    return salary;
}
void Manger::getData()
{
    double bonus , hour ,ra;
    Employee::getData();
    cout<<"\nEnter rate :";
    cin>>ra;
    rate=ra;
    cout<<"\nEnter Bonus ";
    cin>>bonus;
    Bonus=bonus;
    cout<<"\nEnter Hours ";
    cin>>hour;
    Hours=hour;
}
string Manger::ShowData()
{
    return Employee::ShowData() +"\nBouns: "+to_string(Bonus)+"\nRate: "+to_string(rate)+"\nHours is: "+to_string(Hours)+"\nSalary: "+to_string(salary);
}
