#include<iostream>
#include<deque>
using namespace std;

class printdeque {
    public:
        void printit(deque<int> &dq) {
            for(auto it = dq.begin() ; it!=dq.end() ; it++) {
                cout<< *it << " ";
            }
            cout<<endl;
        }
};

int main() {
    printdeque ob;
    deque <int> dq;                 // declaration works same as that of vectors
    ob.printit(dq);
    dq.push_back(30);               // {30}
    dq.push_back(40);               // {30, 40}
    dq.push_back(50);               // {30, 40, 50}
    dq.push_front(20);              // {20, 30, 40, 50}
    dq.push_front(10);              // {10, 20, 30, 40, 50}
    dq.pop_front();                 // {20, 30, 40, 50}
    dq.pop_back();                  // {20, 30, 40}
    ob.printit(dq);
    dq.insert(dq.begin()+1, 10 ,100);
    ob.printit(dq);
    dq.erase(dq.begin() + 2,  dq.begin() + 11);
    ob.printit(dq);

    // rest of the functions are same as that of vector
}
