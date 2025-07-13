#include<iostream>
#include<set>
using namespace std;


/*

What is multiset?
- Everything is sorted
- Stores duplicate elements as well
- Internally uses BST


Everything happens in Log N time
size & empty in O(1) time
clear in O(n) time.
-------------------
| 1. insert       |
| 2. find         |
| 3. erase        |
| 4. upper_bound  |
| 5. lower_bound  | {All same as previously Discussed}
| 6. count        |
| 7. size         | 
| 8. empty        |
| 9. swap         | 
| 10. clear       |
------------------- 
  11. equal_range


*/


class printmultiset {
    public:
        void printit(multiset <int> &st) {
            cout << "{ ";
            for(auto it = st.begin() ; it!=st.end() ; it++)
                cout<< *it << " ";
            cout<< "}" << endl << endl;
        }
};

int main() {
    printmultiset ob;
    multiset <int> ms;
    ms.insert(20);
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);
    ms.insert(28);
    ms.insert(19);
    ms.insert(19);
    ms.insert(19);
    ob.printit(ms);
    ms.erase(20);           // removes all the occurences of the element in a multiset
    ob.printit(ms);
    cout << ms.count(19) << endl;       // returns the count of element
    auto range = ms.equal_range(19);
    cout << "{ ";
    for(auto it = range.first ; it!=range.second ; it++)            // [ range.first -> lower_bound() ] & [ range.second -> upper_bound() ]
        cout << *it << " ";
    cout << "}" << endl;
}