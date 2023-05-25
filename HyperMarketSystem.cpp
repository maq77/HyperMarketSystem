#include "HyperMarketSystem.h"

HyperMarketSystem::HyperMarketSystem()
{
    //ctor
}

HyperMarketSystem::~HyperMarketSystem()
{
    //dtor
}
void HyperMarketSystem::addEmployee()
{
int ch;
cout<<"\n1- Cashier"
     <<"\n2- Helper"
     <<"\n3- Manager"<<endl;
     cout<<"\n>>> ";cin>>ch;
     switch(ch)
     {
     case 1:
         EmployeeList[E_count] = new Cashier;
         EmployeeList[E_count++]->getData();
        break;
     case 2:
         EmployeeList[E_count] = new Helper;
         EmployeeList[E_count++]->getData();
        break;
     case 3:
         EmployeeList[E_count] = new Manger;
         EmployeeList[E_count++]->getData();
        break;

     }


}
void HyperMarketSystem::showEmployees()
{
    for(int i=0;i<E_count;i++)
    {
        EmployeeList[i]->ShowData();
    }
}
void HyperMarketSystem::findEmployee()
{
    int ID=0;
    cout<<"\nEnter ID :";
    cout<<"\n>>> ";cin>>ID;
    bool found=false;
    for(int i=0;i<E_count;i++)
    {
        if(EmployeeList[i]->get_ID() == ID)
        {
            EmployeeList[i]->ShowData();
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"\nFound Sucssfully !"<<endl;
    }
    else{
        cout<<"\nDidn't Find ID"<<endl;
    }

}
void HyperMarketSystem::DeleteEmployee()
{
       int ID=0;
    cout<<"\nEnter ID :";
    cout<<"\n>>> ";cin>>ID;
    bool found=false;
    for(int i=0;i<E_count;i++)
    {
        if(EmployeeList[i]->get_ID() == ID)
        {
            EmployeeList[i] = EmployeeList[E_count-1];
            E_count--;
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"\nDeleted Sucssfully !"<<endl;
    }
    else{
        cout<<"\nDidn't Find ID"<<endl;
    }



}
void HyperMarketSystem::EditEmployee()
{
       int ID=0;
    cout<<"\nEnter ID :";
    cout<<"\n>>> ";cin>>ID;
    bool found=false;
    for(int i=0;i<E_count;i++)
    {
        if(EmployeeList[i]->get_ID() == ID)
        {
            EmployeeList[i]->getData();
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"\nEdited Sucssfully !"<<endl;
    }
    else{
        cout<<"\nDidn't Find ID"<<endl;
    }

}
void HyperMarketSystem::addProduct()
{

    ////  N/A


}
