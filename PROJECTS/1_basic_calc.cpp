#include<iostream>
using namespace std;
/*
OVERALL WRITTING OF THE CODE:
MAKING VARIABLES(2 NUMBERS , RESULT , CHAR FOR OPERATOR)
TAKE INPUT FROM USER USING COUT AND CIN
USING SWITCH CASE TO PERFORM THE OPERATION BASED ON THE OPERATOR , NOT USING IF ELSE BEACAUSE SWITCH EACTS AS A MENU WHILE IF AND ELSE ACTS AS WHAT TO DO AFFTER THIS


*/

int main(){
    
    double num1, num2, result;
    char operation;
    char again = 'y';

    while( again == 'y' || again == 'Y'){ // for uses's convinence to perform multiple calculations without restarting the program

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> again; // takes input from user and put again in result .. if y calc start again , if n nothing happens and the further codes proceed
    }

    cout << "Thank you for using the calculator!" << endl;



    return 0;
}