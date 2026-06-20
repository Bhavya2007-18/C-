#include<iostream>
#include<stack>
using namespace std;

int main(){
    
/*

behaviour is last in first out
last thing added is the first thing to be removed

BASIC OPERATIONS OF STACK
- push() to add an element
- pop() to remove the top element
- top() to return the top element
- empty() to check if the stack is empty

*/

   // stack<data_type> stack_name;
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl; // 30


   // 1 REVERSE STRING

      // in stack everything that is inputed is reversed already because of LIFO , so we just need tto push everything in and the just pop it out
      string rs;
      cout << " enter the string to reverse : ";
      cin >> rs;   // to take input from user and strore it in rs

      stack<char> st1;  // create an empty stack that will sotres single characters
      for (char ch: rs){ // range based loop to interate through stack
        st1.push(ch);   // put the crrent char at the top of the stack
      }

      string reversed_string = "";   // create an empyty string to store our ans(reversed-string)
      while(!st1.empty()){  // loops keep running till stack becomes empty -- st.empty() = true is stack has nothing in it --- !st.empty() = while its not empty
        reversed_string += st1.top(); // take the top char from stack and add it to reversed_string
        st1.pop(); // remove the top char from stack so that next char can become the new top in the next iteration
      }

      cout << "reversed string is : " << reversed_string << endl;

      


   
   




    return 0;
}