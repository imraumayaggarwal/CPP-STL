#include<iostream>
#include<list>
using namespace std;


/*

1. push_front
2. pop_front
----------------------
| 3. erase           |
| 4. swap            |
| 5. clear           | {All same as previously Discussed}
| 6. empty           |
| 7. size            |
----------------------

*/


class printlist {
    public:
        void printit(list <int> &ls) {
            for(auto it = ls.begin() ; it!=ls.end() ; it++) {
                cout<< *(it) << " ";
            }
            cout<<endl;
        }
};

int main() {
    // works same as that of vector for declaration.
    printlist ob;
    list <int> ls;
    ls.push_back(10);      // {10} 
    ls.push_back(20);      // {10, 20}
    ls.push_back(30);      // {10, ,20, 30}
    ls.push_back(30);      // {10, ,20, 30, 30}
    ls.push_front(0);      // {0, 10, ,20, 30, 30} much more preferred than insert for list
    ls.pop_back();
    ls.pop_front();
    ob.printit(ls);

    /*
    rest of the functions are same as that of vector.
    */
}

