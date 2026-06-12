#include <iostream>
using namespace std;

int main(){

    cout << "enter your grade: ";
    char grade;
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Fair!" << endl;
            break;
        case 'D':
            cout << "Poor!" << endl;
            break;
        case 'F':
            cout << "Failing!" << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    return 0;
}