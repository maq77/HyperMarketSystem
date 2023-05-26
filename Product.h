#ifndef PRODUCT_H
#define PRODUCT_H
#pragma once
#include <string>
#include<iostream>
using namespace std;
class Product
{
private:
protected:
	int id;
	string productName;
	int price;
	string Coupon;
	string Note;
	string Dep;

public:

	Product();
	int getId();
	string getDepartment(){return Dep;}
	string getProductName();
	void inputData();
	void showData();
	double getPrice();
	double Discount(int);
};

#endif // PRODUCT_H
