#include <iostream>
using namespace std; // means we can use names for obj and var from the standard library
/* 
int = integers
double = decimals
char = single alphabet
string = stores words and sentences
bool = true and false
*/


int main(){
    cout << "hello world" << endl;
    cout << "new line is added" << endl; // endl print in next line
    cout << 3 << endl;
    cout << 3+4 << endl;


int age = 19;
cout << age << endl;

int x=5 , y=10 , z=15;
cout << x+y+z << endl;

int a,b,c;
a=b=c=18;
cout << a+b+c << endl;


int input;
cout << "enter a number: ";
cin >> input; // takes input from user and stores it in variable input

cout << "you inputed number is " << input << endl;


    return 0; // ends the main function

    // c++ also have constants which are values that cannot be changed
}