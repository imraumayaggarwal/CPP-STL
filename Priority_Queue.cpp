#include<iostream>
#include<queue>
using namespace std;

// Priority Queue can be traversed by making a copy of the PQ and then printing the top element by emptying it, each at a time.
class printpqminheap {
    public:
        void printthepqminheap(priority_queue <int, vector<int>, greater<int>> &pq) {
            priority_queue <int, vector<int>, greater<int>> temp = pq;
            while(!temp.empty()) {
                cout<<temp.top() << " ";
                temp.pop();
            }
        }
};

int main() {
    printpqminheap ob;
    priority_queue<int> pq;
    pq.push(5);         // (5)
    pq.push(2);         // {5, 2)
    pq.push(8);         // (8, 5, 2)
    pq.emplace(10);     // (10, 8, 5, 2}
    cout << pq.top() << endl;   // 10
    pq.pop();           // {8, 5, 2)
    cout << pq.top() << endl;   // 8

    // Minimum Heap
    priority_queue <int, vector<int>, greater<int>> pq1;
    pq1.push(5);         // {5}
    pq1.push(2);         // {2, 5)
    pq1.push(8);         // (2, 5, 8)
    pq1.emplace(10);     // (2, 5, 8, 10)
    cout << pq1.top() << endl;   // 2
    ob.printthepqminheap(pq1);
}