#include "HyperMarketSystem.h"

HyperMarketSystem::HyperMarketSystem()
{
    EmployeeList = new Employee*[100];
    E_count=0;
    ProductList = new Product[100];
    P_count=0;
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
         EmployeeList[E_count]->getData();
         E_count++;
        break;
     case 2:
         EmployeeList[E_count] = new Helper;
         EmployeeList[E_count]->getData();
         E_count++;
        break;
     case 3:
         EmployeeList[E_count] = new Manger;
         EmployeeList[E_count]->getData();
         E_count++;
        break;

     }


}
void HyperMarketSystem::showEmployees()
{
    for(int i=0;i<E_count;i++)
    {
        cout<<"\n [ Employee No."<<i+1<<" ]"<<endl;
        cout<<EmployeeList[i]->ShowData()<<endl;
    }
    if(E_count==0){
        cout<<"\n No Employees ! "<<endl;
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
    char Dis_ch;
    cout<<"Do You Want to add Discount ? (y,n) : ";
    cin>>Dis_ch;

    if(Dis_ch == 'y'){  /// Discount
    cout<<"Enter Discount (E.g 50)->(50%) in Percents : ";
    int Dis=0;
    cin>>Dis;
    cout<<"Product Price after Discount : "<<ProductList[P_count-1].Discount(Dis)<<endl;
    }

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
        cout<<"Product Price after Discount : "<<ProductList[i].Discount(Dis)<<endl;
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
       cout<<"\n [ Product No."<<i+1<<" ]"<<endl;
       ProductList[i].showData();
   }

}
bool HyperMarketSystem::Assign_Dept_to_emp(int emp_id ,Department* d)
{
    int emp_index=Find_indexOfEmp_byID(emp_id);
    if(emp_index==-1)
        return false;
    Employee* Emp=EmployeeList[emp_index];
    Emp->Setdepartment(d);
    return true;
}
int HyperMarketSystem::Find_indexOfEmp_byID(int emp_id)
{
    for(int i=0;i<E_count;i++)
    {
        if(EmployeeList[i]->get_ID()==emp_id)
        {
            return i;
        }
    }
    return -1;
}
