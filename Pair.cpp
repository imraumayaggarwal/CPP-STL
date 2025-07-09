#include<iostream>
using namespace std;

int main() {
    //Pair
    pair <int, int> p;
    int u, v;
    cin >> u >> v;
    p.first = u;
    p.second = v;
    cout << "{" << p.first << "," << p.second << "}" << endl;

    //Nested Pair
    pair <int, pair<int, int>> newp;
    newp.first = 1;
    newp.second.first = 2;
    newp.second.second = 3;
    cout<< "{" << newp.first << "," << newp.second.first << "," << newp.second.second << "}" << endl;

    // we can also declare a pair with helper function make_pair.
    pair <string, int> p1;
    p1 = make_pair("hello", 1);    // We can also use different data types within a pair
    cout << "{" << p1.first << "," << p1.second << "}" << endl;

    //we can also declare an array of pairs
    pair<int, int> arr[3];
    for(int i = 0 ; i < 3 ; i++) {
        int u, v;
        cin>>u>>v;
        arr[i] = make_pair(u,v);
    }
    cout<<"{ ";
    for( int i = 0 ; i < 3 ; i++) {
        cout << "{" << arr[i].first << "," << arr[i].second << "} ";
    }
    cout<<"}"<<endl;

}