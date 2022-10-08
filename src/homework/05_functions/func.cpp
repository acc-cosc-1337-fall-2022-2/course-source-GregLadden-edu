//add include statements
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

//add function code here
double get_gc_content(const string& dna )
{
    double gc_total = 0;
    double str_total = dna.size();
    for(char i : dna) {
        if(i == 'C' || i == 'G') {
            gc_total++;
        }
    }

    double  result = gc_total / str_total;

    return result;
}

string get_reverse_string(string dna)
{
    string rev_str;

    for(int i=dna.length()-1; i>=0; i--){
        rev_str += dna[i];
    }

    return rev_str;
}

string get_dna_complement(string dna){

    string rev_str = get_reverse_string(dna);

    for(int i = 0; i < rev_str.length(); i++) {
//
        switch (rev_str[i]) {
            case 'A':
                rev_str[i] = 'T';
                break;
            case 'T':
                rev_str[i] = 'A';
                break;
            case 'C':
                rev_str[i] = 'G';
                break;
            case 'G':
                rev_str[i] = 'C';
                break;
        }
    }
    return rev_str;
}

int run_menu(){
    int option = 0;

    cout<<"Menu\n";
    cout<<"1) Get GC Content\n";
    cout<<"2) Get DNA Complement\n";
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
    } else if (option > 3 || option < 1) {
        cout<< "Not an acceptable choice. Please choose a number from the menu. \n";
    }

    return option;
}

