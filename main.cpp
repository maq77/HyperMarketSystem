#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include "HyperMarketSystem.h"
using namespace std;

int main()
{
    int ch;
    HyperMarketSystem H;
    int D_count=0;
    Department* depart=new Department[10];
    system("Color 0A");
    cout << "\n\t\t[ Welcome to Hyper System Market ! ]" << endl;
    do{
    cout<<"\n\n[1] Employee"<<"\n[2] Product "<<"\n[3] Department"<<"\n[4] Assignment Department to Emp"<<"\n[0] Exit";
    cout<<"\n>>> "; cin>>ch;
    switch(ch)
    {

    case 1:
        {
        cout<<"\n[1] Add Employee"<<"\n[2] Edit Employee"<<"\n[3] Find Employee"<<"\n[4] Delete Employee"<<"\n[5] Show Employees"<<"\n[00] Back"<<"\n[0] Exit "<<endl;
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
            cout<<endl;
            break;
        }
        system("pause");
        system("cls");
        break;
        }
    case 2:
        {
        cout<<"\n[1] Add Product"<<"\n[2] Edit Product"<<"\n[3] Find Product"<<"\n[4] Delete Product"<<"\n[5] Show Product"<<"\n[00] Back "<<"\n[0] Exit"<<endl;
        //int ProdCh;
        cout<<"\n>>> ";cin>>ch;
        switch(ch)
        {
        case 1:
            H.addProduct();
            break;
        case 2:
            H.EditProduct();
            break;
        case 3:
            H.SearchProduct();
            break;
        case 4:
            H.DeleteProduct();
            break;
        case 5:
            H.ShowProduct();
            break;
        }
        system("pause");
        system("cls");
        break;
        }
    case 3:
        {
        cout<<"\n[1] Add Department"<<"\n[2] Show Department"<<"\n[00] Back "<<"\n[0] Exit"<<endl;
        cout<<"\n>>> ";cin>>ch;
        switch(ch)
        {
        case 1:
            depart[D_count].getdepartment();
            D_count++;
            break;
        case 2:
            for(int i=0;i<D_count;i++)
                depart[i].print();
            break;
        }
        system("pause");
        system("cls");
        break;
        }
    case 4:
        {
        //Assign
        int dept_id=-1;
        cout<<"Enter Department ID: ";
        cin>>dept_id;
        int Dept_index=-1;
        for(int i=0;i<D_count;i++)
        {
            if(depart[i].get_ID()==dept_id)
                Dept_index=i;
        }
        if(Dept_index==-1)
            cout<<"Department is not found...\n";
        else
        {
            int emp_id=-1;
            cout<<"Enter Employee ID: ";
            cin>>emp_id;
            bool AssignSuccessful=H.Assign_Dept_to_emp(emp_id,depart+Dept_index);
            if(AssignSuccessful)
                cout<<"Assignment Successfully!";
            else
                cout<<"Assignment is failed";
        }
        break;
        }
    case 0:
        return 0;
        break;

    }
    }while( ch != 0 || ch == 00);
}
