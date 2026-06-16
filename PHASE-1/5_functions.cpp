#include <iostream>
using namespace std;

/* return_type fnx_name(parameters){
                  // body of the function}
                  
                  */

int add(int a , int b){
    return a + b;
}                  
int sub(int a , int b){
    return a - b;
}
int main(){

    int result1 = add(10, 5);
    int result2 = sub(10, 5);   
    cout << "Addition: " << result1 << endl;
    cout << "Subtraction: " << result2 << endl;


   
    return 0;
}