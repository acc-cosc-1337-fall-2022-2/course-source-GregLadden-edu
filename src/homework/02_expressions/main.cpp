//write include statements
#include <iostream>
#include "hwexpressions.h"


//write namespace using statement for cout
using std::cout;
using std::cin;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
    double meal_amount
    double tip_rate
    double tip_amount
    double tax_amount
    double total

    cout << "Meal amount: \n";
    cin >> meal_amount;
    tax_amount = get_sales_tax_amount(meal_amount);
    cout << "Tip rate: \n";
    cin >> tip_rate;
    tip_amount = get_tip_amount(meal_amount, tip_rate);
    total = tip_amount + meal_amount + tax_amount;
    cout << "Meal amount: \n"<< meal_amount;
    cout << "Sales tax: \n"<< tax_amount;
    cout << "Tip amount: \n"<< tip_amount;
    cout << "Total: \n"<< total;

	return 0;
}
