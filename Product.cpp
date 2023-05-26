#include "Product.h"

Product::Product()
{
	id = 0;
	productName = "NULL";
	price = 0.0;
}

int Product::getId()
{
	return id;
}

string Product::getProductName()
{
	return productName;
}

void Product::inputData()
{
	cout << "\nThis Info for product.";
	cout << "\nId: ";
	cin >> id;

	cout << "\nName: ";
	cin >> productName;

    cout << "\nDepartment: ";
	cin >> Dep;

	cout << "\nprice: ";
	cin >> price;

	cout << "\nCoupon: ";
	cin >> Coupon;


	cout << "\nNote: ";
	cin >> Note;
}

void Product::showData()
{
	cout << "\nthis is info for Product." << endl;
	cout << "\nthe id is: " << id;
	cout << "\nthe name is: " << productName;
    cout << "\nthe Department is: " << Dep;
	cout << "\nthe price is: " << price;
	cout << "\nthe coupon is: " << Coupon;
	cout << "\nthe Note is: " << Note;
}

double Product::getPrice()
{
	return price;
}

double Product::Discount(int precentDicount)
{
	return (precentDicount / 100) * price;
}
