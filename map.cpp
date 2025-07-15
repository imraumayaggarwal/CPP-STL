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
for example a map of rollno : marks, where roll no is unique but marks can be same for diff roll numbers



1. emplace / insert
2. 
*/

int main() {
    map <int, int> mp;
    // map <int, pair<int, int>> mpp; can also be declared like this
    mp.insert({1,2});
    mp.insert({3,4});
    mp.emplace({2,5});

}