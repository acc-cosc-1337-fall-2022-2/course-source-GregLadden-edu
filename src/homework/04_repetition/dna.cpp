//add include statements
#include "dna.h"

using std::cout;
using std::cin;
using std::string;

//add function(s) code here
int factoral(int num){

    int i,sum=1;

    for(i=1;i<=num;i++){
        sum=sum*i;
    }

    return sum;
}

int gcd(int num1, int num2) {

    while(num1 != num2){
        if(num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    return num1;
}

int run_menu(){
    int option = 0;

    cout<<"Choose your function - 1 or 2? Press 3 to exit.\n";
    cout<<"1) Factoral\n";
    cout<<"2) GCD\n";
    cout<<"3) Exit\n";
    cin>>option;

    if(option == 3) {
        string users_choice;
        cout<<"Are you sure you want to exit?\n";
        cout<<"y for Yes\n";
        cout<<"n for No\n";
        cin>>users_choice;

        if (users_choice == "y") {
            return 3;
        } else {
            run_menu();
        }
    }

    return option;
}

