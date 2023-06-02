#ifndef HYPERMARKETSYSTEM_H
#define HYPERMARKETSYSTEM_H
#include "Employee.h"
#include "Cashier.h"
#include "Helper.h"
#include "Manger.h"
#include "Product.h"
#include "Department.h"
#include <iostream>
using namespace std;

class HyperMarketSystem
{
    public:
        HyperMarketSystem();
        virtual ~HyperMarketSystem();
        ////////////////////////////
        void addEmployee();
        void findEmployee();
        void DeleteEmployee();
        void EditEmployee();
        void showEmployees();
        /////////////////////////////////
        void addProduct();
        void EditProduct();
        void SearchProduct();
        void DeleteProduct();
        void ShowProduct();
        ///////////////////////////////
        bool Assign_Dept_to_emp(int ,Department*);
        int Find_indexOfEmp_byID(int);
    protected:
        Employee **EmployeeList;
        int E_count;
        Product *ProductList;
        int P_count;


    private:
};

#endif // HYPERMARKETSYSTEM_H
