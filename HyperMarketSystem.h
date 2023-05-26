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
        /////////////////////////////////
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
        ////////////////////////////////
        void addDepartment();
        void EditDepartment();
        void ShowDeparment();
        ///////////////////////////////
    protected:
        Employee **EmployeeList = new Employee*[10];
        int E_count=0;
        Product *ProductList = new Product[10];
        int P_count=0;
        Department *DepartmentList = new Department[5];
        int D_count=0;


    private:
};

#endif // HYPERMARKETSYSTEM_H
