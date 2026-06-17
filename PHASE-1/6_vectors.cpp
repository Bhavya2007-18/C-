#include <iostream>
#include <vector>
using namespace std;
// a vactor is just a dynamic sized array in the stl , but it req computational power and time

int main(){
    
    // vector<data_type> vector_name(size, initial_value);
     vector<int> numbers; // empty vector
     vector<int> numbers2 = {1,2,3,4,5}; //initialize list like a simple array
     vector<int> numbers3(5, 0); // size 5 and initial value 0
     vector<int> numbers4(5); // size 5 and initial value 0
     vector<string> names(3, "unknown"); // size 3 and initial value "unknown"

     for (int i = 0; i < numbers2.size(); i++){
        cout << numbers2[i] << " ";
     }  // printing it just like printing an array

     // to make an array 1 to 10 using loop and vector
     vector<int> oneto10;

        for (int i=1; i<=10; i++){
            oneto10.push_back(i);
            cout << oneto10[i-1] << " ";
        }
        
    
    return 0;
}

/*
Construction & assignment

vector() — empty vector
vector(n, value) — n copies of value
vector(first, last) — copy a range from another container
vector(initializer_list) — e.g. {1, 2, 3}
operator= — copy, move, or replace contents
assign(n, value) / assign(first, last) — replace contents in place, without making a new vector

Element access

operator[] — unchecked access
at() — bounds-checked access, throws std::out_of_range
front() / back() — first / last element
data() — raw pointer to the underlying array (new — handy when calling C APIs that expect a T*)

Iterators

begin() / end() — forward iteration
rbegin() / rend() — reverse iteration (new)
cbegin() / cend() — const versions, read-only even on a non-const vector

Capacity

size() — number of elements currently stored
empty() — true if size() == 0
capacity() — how many elements fit before the next reallocation
reserve(n) — pre-allocate capacity for n elements
shrink_to_fit() — release unused capacity back to the system (new, non-binding request)
max_size() — theoretical upper bound on size (rarely useful day-to-day)

Modifiers

push_back(value) / pop_back() — add / remove at the end
emplace_back(args...) — construct an element in place at the end, skipping a temporary (new)
insert(pos, value) / erase(pos) — add / remove at an arbitrary position
emplace(pos, args...) — construct in place at an arbitrary position (new)
resize(n) / resize(n, value) — grow or shrink to exactly n elements (new)
clear() — remove all elements; capacity is usually left unchanged
swap(other) — swap contents with another vector in O(1) (new)

Comparisons (non-member)

==, !=, <, <=, >, >= — compare two vectors element by element, lexicographically
*/