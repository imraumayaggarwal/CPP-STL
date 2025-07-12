#include<iostream>
#include<queue>
using namespace std;

/*
We cannot use iterators to traverse through the queue.
It is built on underlying containers like deque (not vector),
but it intentionally hides the container's iterators
to enforce the FIFO (First In First Out) property.
*/

int main() {
    queue <int> q;
    q.push(10);         // {10}
    q.push(20);         // {10, 20}
    q.push(30);         // {10, 20, 30}
    q.push(40);         // {10, 20, 30, 40}
    q.push(50);         // {10, 20, 30, 40, 50}
    q.push(60);         // {10, 20, 30, 40, 50, 60}
    q.pop();            // {20, 30, 40, 50, 60}

    cout << "Size of the queue " << q.size() << endl;   //5
    cout << q.empty() << endl;  //0
    cout << "The last element is " << q.back() << endl;
    cout << "The first element is " << q.front() << endl;

    /* we can traverse through the queue by copying it to a temporary queue and printing elements by popping it from the temporary queue*/
    queue <int> tempqueue = q;
    while(!tempqueue.empty()) {
        cout<< tempqueue.front() << " ";
        tempqueue.pop();
    }

}