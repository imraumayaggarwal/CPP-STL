#include<iostream>
#include<stack>
using namespace std;

/*
we cannot use iterators to traverse through the stack. It is built on the containers like vector, but intentionally it hides
the container's iterators to enforce the property of LIFO (Last in first out)
*/ 

int main() {
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout<< st.top() << endl;                // prints the topmost (LAST) element
    st.pop();                               // removes the topmost (LAST) element
    cout<< st.size() << endl;               // no. of elements in the stack
    cout<< st.empty() << endl;              // if empty -> true(1), else -> false(0)

    /* we can traverse through the stack by copying it to a temporary stack and printing elements by popping it from the temporary stack*/
    stack <int> tempstack = st;
    while(!tempstack.empty()) {
        cout<< tempstack.top() << " ";
        tempstack.pop();
    }

}