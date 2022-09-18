//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
    int num;
    int result;
    auto num1 = 4;

    cout << "Enter a number: \n";
    cin >> num;
    result = multiply_numbers(num);
    cout<<"The first result is: "<<result<<'\n';
    result = multiply_numbers(num1);
    cout<<"The second result is: "<<result<<'\n';

    return 0;
}