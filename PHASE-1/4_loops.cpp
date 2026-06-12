#include <iostream>
using namespace std;

int main(){

    // for loop
    for(int i=0; i<5; i++){
        cout << "Hello World!" << endl;
    }

    // while loop
    int j = 0;
    while(j < 5){
        cout << "Hello World!" << endl;
        j++;
    }

    // do-while loop
    int k = 0;
    do{
        cout << "Hello World!" << endl;
        k++;
    } while(k < 5);

    // for-each loop
    int arr[] = {1, 2, 3, 4, 5};
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}