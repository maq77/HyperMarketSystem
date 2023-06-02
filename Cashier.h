#ifndef CASHIER_H
#define CASHIER_H
#include"Employee.h"

class Cashier : public Employee
{
    public:
        Cashier();
        virtual ~Cashier();
        void getData();
        string ShowData();
        double getSalary();
        double addHours(double);
        double addBonus(double);
    protected:

    private:
        double Bouns=0;
        double rate=0;
        double Hours=0;
};

#endif // CASHIER_H
