#include<iostream>
#include<set>
using namespace std;

/* 

What is set?
- Everything is sorted
- Everything is unique
- Internally uses BST
everything happens in Log n time

1. insert
2. find
3. erase
4. upper_bound
5. lower_bound
6. count
-------------------
| 7. size         | 
| 8. empty        |
| 9. swap         | {All same as previously Discussed}
| 10. clear       |
------------------- 

*/

class printset {
    public:
        void printit(set <int> &st) {
            cout << "{ ";
            for(auto it = st.begin() ; it!=st.end() ; it++)
                cout<< *it << " ";
            cout<< "}" << endl << endl;
        }
};

int main() {
    printset ob;
    set <int> st;
    st.insert(10);
    st.insert(40);
    st.insert(40);
    st.emplace(45);
    st.emplace(50);
    st.emplace(48);
    st.emplace(19);
    st.insert(20);
    ob.printit(st);

    // size(), empty(), swap(), clear() are all same
    // iterators exist [ begin(), end(), rbegin(), rend() ]

    // here find() finds the element in the set, where it pointer points to the memory location of the element
    auto it = st.find(45);
    cout << *it << endl;        // 45

    // if an element does not exist in the set, then the iterator will always return set.end()
    auto it1 = st.find(60);
    if(it1== st.end())
        cout<< "element not found" << endl;
    else
        cout << *it1 << endl;

    // erase function - single element
    st.erase(45);
    ob.printit(st);

    // erase function - a range of elements
    st.erase(st.lower_bound(30), st.lower_bound(48));
    ob.printit(st);
    // let element be x
    // lower_bound() -> first element >= x
    // upper_bound() -> first element > x
    /*
        { 10 19 20 48 50 }
         lower_bound(25) -> 48
         lower_bound(20) -> 20
         upper_bound(20) -> 48
    */
    cout << "lower(25) : " << *(st.lower_bound(25)) << endl;
    cout << "lower(20) : " << *(st.lower_bound(20)) << endl;
    cout << "upper(20) : " << *(st.upper_bound(20)) << endl;


    // count
    int ch;
    cin >> ch;
    cout << st.count(ch) << endl;
}