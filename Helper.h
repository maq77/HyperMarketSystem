#ifndef HELPER_H
#define HELPER_H
#include"Employee.h"

class Helper: public Employee
{
    public:
        Helper();
        virtual ~Helper();
        void getData();
        double getSalary();
        string ShowData();
    protected:

    private:
        double Target;
        double rate;
        double Bouns;
};

#endif // HELPER_H
