/* Unlike array which has a fixed size, vector is dynamic in nature which means we can increase the size of the vector whenever we want.
 again we can use any datatype. ex: string, int, double, long, float, etc,.  
    1. push_back
    2. Acessing elements
    3. erase
    4. insert
    5. pop_back
    6. swap
    7. clear
    8. empty
 */


#include<iostream>
#include<vector>
using namespace std;
class vectorprint {
    public:
        void printit(vector<int> &v) {
            for(auto it = v.begin() ; it!=v.end() ; it++) {
                cout<< *it << " ";
            }
            cout<<endl;
        }
};

int main() {
    vectorprint ob;
    vector<int> v;                                      // {}
    vector<int> v1(5);                                  // {0,0,0,0,0}
    vector<int> v2(5,100);                              // {100, 100, 100, 100, 100}
    cout<<"for V:"<<endl;
    ob.printit(v);
    cout<<endl<<"for v1:"<<endl;
    ob.printit(v1);
    cout<<endl<<"for v2:"<<endl;
    ob.printit(v2);
    cout<<endl;

    // 1. push_back: pushes the elements into the vector. (we can also use emplace_back as it is much more efficient)

    v.push_back(10);                    // v : {10}
    v1.push_back(1);                    // v1: {0,0,0,0,0,1}
    v2.push_back(200);                  // v2: {100, 100, 100, 100, 100, 200}
    cout<<"for V:"<<endl;
    ob.printit(v);
    cout<<endl<<"for v1:"<<endl;
    ob.printit(v1);
    cout<<endl<<"for v2:"<<endl;
    ob.printit(v2);
    cout<<endl;
    
    // 2. Accessing elements in the vector (3ways)

    cout << v2[0] << endl;              // way1
    cout << v2.at(0) << endl;           // way2
    /*
    NOTE :  v.begin() -> points to the starting element of the vector
            v.end()   -> points right after to the last element of the vector

            for example:
                                {1 , 2, 3, 4, 5}   
                                 ^               ^
                                v.begin()        v.end() 
            so if we want to access the last element, we will perform it--;

    */
    vector <int> v4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = v4.begin();               // points at the first element of the vector at pos 0
    it = it + 2;                        //  {3}
    cout << *it << endl;
    auto nt = v4.end();                 // points right after to the last element of the vector
    nt--;
    cout << *nt << endl;                // {10}
    /*
    Similarly we also have:
    1. v.rbegin() -> points to the last element of the vector
    2. v.rend() -> points right before the first element of the vector

        here r stands for reverse.
                                        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
                                      ^                              ^
                                      v.rend()                       v.rbegin() 
    */

    // 3. erase

    v4.erase(v.begin() + 2);                  // {1, 2, 4, 5, 6, 7, 8, 9, 10}
    ob.printit(v4);
    cout<<endl;
    // erase(start,end)
    v4.erase(v.begin() + 1, v.begin() + 3);   // {1, 5, 6, 7, 8, 9, 10}
    ob.printit(v4);
    cout<<endl;
    
    // 4. Insert

    v.insert(v.begin(), 0);             // inserts at beginning
    v.insert(v.end(), 20);              // inserts at end
    ob.printit(v);
    // v.insert(position , no of values, value)
    v.insert(v.end(), 2, 30);
    ob.printit(v);

    // 5. pop_back()

    v.pop_back();               // pops the last element

    // 6. swap

    /*
    if v1 = {1,2}
       v2 = {3,4}

       v1.swap(v2);
       v1 = {3,4}
       v2 = {1,2}
    */

    // 7. clear

    v1.clear();                 // clears the entire vector
    ob.printit(v1);

    // 8. empty

    cout << v1.empty();         // if empty -> true ; else -> false
}