#include<iostream>
#include<map>
using namespace std;


/*
maps contain key-value pairs.
Its exactly same as dictionary in Python.

Things to remember:
- Keys are unique always (can be of any data type)
- values can be duplicate (can be of any data type)
- Keys are always stored in the sorted order.
- works in Log n time
for example a map of rollno : marks, where roll no is unique but marks can be same for diff roll numbers



1. emplace / insert
2. find
3. erase
4. swap
5. size
6. empty
7. lower_bound
8. upper_bound
*/

class printmap {
    public:
        void printit(map <int, int> &mp) {
            cout<< "{ ";
            for(auto it = mp.begin() ; it!=mp.end() ; it++) {
                cout << "( "<< (*it).first << " : " << (*it).second << " )" << " ";
            }
            cout << " }" << endl;
        }
};

int main() {
    printmap ob;
    map <int, int> mp;
    // map <int, pair<int, int>> mpp; can also be declared like this
    mp[4] = 3;
    mp.insert({1,2});
    mp.insert({3,4});
    mp.emplace(2,5);
    ob.printit(mp);

    cout << mp[1] << endl << mp[3] << endl;

    auto it = mp.find(2);
    cout << "mp.find(2) key: " << it->first << endl; // for key
    cout << "mp.find(2) value: "  << it->second << endl; // for value
 }