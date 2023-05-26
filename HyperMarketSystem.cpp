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
char ch;
do{
    ProductList[P_count++].inputData();
    cout<<"Do You Want to Add Another Product (y,n) : ";
    cin>>ch;

}while(ch=='y'||ch=='Y');
}
void HyperMarketSystem::EditProduct()
{
    int ID=0;
    bool found =false;
    cout<<"Enter Product ID : ";
    cin>>ID;
    for(int i=0;i<P_count;i++)
    {
        if(ProductList[i].getId() == ID)
        {

        ProductList[i].inputData();
        int Dis=0;
        cout<<"Enter Discount (E.g 50)->(50%) in Percents : ";
        cin>>Dis;
        ProductList[i].Discount(Dis);
        found = true;
        break;

        }


    }
    if(!found){
        cout<<"Didn't find ID!"<<endl;
    }




}
void HyperMarketSystem::SearchProduct()
{
    int ID=0;
    bool found=false;
    cout<<"Enter Product ID : ";
    cin>>ID;
    for(int i=0;i<P_count;i++)
    {
        if(ProductList[i].getId() == ID)
        {

        ProductList[i].showData();
        found = true;
        break;

        }


    }
    if(!found){
        cout<<"Didn't find ID!"<<endl;
    }



}
void HyperMarketSystem::DeleteProduct()
{
    int ID=0;
    cout<<"Enter Product ID : ";
    cin>>ID;
    for(int i=0;i<P_count;i++)
    {
        if(ProductList[i].getId() == ID)
        {

        ProductList[i] = ProductList[P_count-1];
        P_count--;
        break;

        }


    }




}
void HyperMarketSystem::ShowProduct()
{

   for(int i=0;i<P_count;i++)
   {
       ProductList[i].showData();
   }

}
void HyperMarketSystem::addDepartment()
{
    char ch;
    do{
    cout<<endl;
    DepartmentList[D_count++].getdepartment();
    cout<<"Do You Want to Add Another Department (y,n) : ";
    cin>>ch;
    }while(ch=='y'||ch=='Y');
}
void HyperMarketSystem::EditDepartment()
{
    int ID=0;
    bool found=false;
    cout<<"Enter Department ID : ";
    cin>>ID;
    for(int i=0;i<D_count;i++)
    {
        if(DepartmentList[i].get_ID() == ID)
        {

        DepartmentList[i].print();
        found=true;
        break;

        }


    }
    if(!found)
    {
       cout<<"Didnt't Find ID !"<<endl;
    }

}
void HyperMarketSystem::ShowDeparment()
{
    for(int i=0;i<D_count;i++)
    {
        cout<<endl;
        cout<<"Department No. "<<i+1<<endl;
        DepartmentList[i].print();
    }

}
