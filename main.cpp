#include <iostream>
#include "HyperMarketSystem.h"
using namespace std;

int main()
{
    int ch;
    HyperMarketSystem H;
    cout << "\n\t\tWelcome to Hyper System Market !" << endl;
    do{
    cout<<"\n\n1- Employee"<<"\n2- Product "<<"\n3- Department";
    cout<<"\n>>> "; cin>>ch;
    switch(ch)
    {

    case 1:
        cout<<"\n1- Add Employee"<<"\n2- Edit Employee"<<"\n3- Find Employee"<<"\n4- Delete Employee"<<"\n5- Show Employees"<<"\n00- Back"<<"\n0- Exit "<<endl;
        //int EmpCh;
        cout<<"\n>>> ";cin>>ch;
        switch(ch)
        {
        case 1:
            H.addEmployee();
            break;
        case 2:
            H.EditEmployee();
            break;
        case 3:
            H.findEmployee();
            break;
        case 4:
            H.DeleteEmployee();
            break;
        case 5:
            H.showEmployees();
            break;
        }
        break;
    case 2:
        cout<<"\n1- Add Product"<<"\n2- Edit Product"<<"\n3- Find Product"<<"\n4- Search Product"<<"\n5- Delete Product"<<"\n6- Show Product"<<"\n00- Back "<<"\n0- Exit"<<endl;
        //int ProdCh;
        cout<<"\n>>> ";cin>>ch;
        switch(ch)
        {
        case 1:
            ///H.addProduct();
            break;
        case 2:
            ///H.EditProduct();
            break;
        case 3:
            ///H.SearchProduct();
            break;
        case 4:
            ///H.SearchProduct();
            break;
        case 5:
            ///H.DeleteProduct();
            break;
        case 6:
            ///H.ShowProduct();
            break;
        }
        break;
    case 3:
        //Department
        cout<<"\n1- Add Department"<<"\n2- Edit Department"<<"\n3- Show Department"<<"\n00- Back "<<"\n0- Exit"<<endl;
        //int ProdCh;
        cout<<"\n>>> ";cin>>ch;
        switch(ch)
        {
        case 1:
            ///H.addDepartment();
            break;
        case 2:
            ///H.EditDepartment();
            break;
        case 3:
            ///H.ShowDepartment();
            break;
        }
        break;
    case 0:
        return 0;
    }

    }while(ch != 0 || ch == 00);
    return 0;
}
