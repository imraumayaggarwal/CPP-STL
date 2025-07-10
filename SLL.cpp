#include<iostream>
#include<list>
using namespace std;

class node {
    public:
        int data;
        node* next;

        node(int data1) {
            data = data1;
            next = NULL;
        }
};

void insertAtEnd(node* &head, int data) {
    node* newnode = new node(data);
    
    // 1. SLL is Empty
    if(head==NULL) {
        head = newnode;
        cout<<"Head -> NULL ; Node inserted into linkedlist" << endl;
    }
    
    // 2. If nodes are already present
    else {
        node* temp = head;
        while(temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        cout<<"Node inserted at the end!" << endl;
    }
}

void insertAtFront(node* &head, int data) {
    node* newnode = new node(data);

    // 1. SLL is Empty
    if(head == NULL) {
        head = newnode;
        cout<<"Head -> NULL ; Node inserted at front" << endl;
    }
    
    // 2. Node/Nodes are already present
    else {
        newnode->next = head;
        head = newnode;
        cout<<"Node inserted at the front!" << endl;
    }
}

void deleteAtEnd(node* &head) {

    // 1. SLL is Empty
    if(head == NULL) {
        cout<<"SLL Empty!" << endl;
    }
    
    // 2. Only Head present in SLL
    else if (head->next == NULL) {
        delete head;
        head=NULL;
        cout<<"Deleted last node! LL EMPTY" << endl;
    } 
    
    // 3. Nodes present in SLL
    else {
        node* temp = head;
        node* follow = head;
        while(temp->next!=NULL) {
            follow = temp;
            temp = temp->next;
        }
        follow->next = NULL;
        delete temp;
        cout<<"Deleted the last node!" << endl;
    }
}

void deleteAtFront(node* &head) {

    // 1. SLL is Empty
    if(head == NULL) {
        cout<<"SLL Empty!" << endl;
    } 
    
    // 2. Only Head present in SLL
    else if (head->next == NULL) {
        delete head;
        head = NULL;
        cout<<"Deleted first node! LL EMPTY!" << endl;
    } 
    
    // 3. Nodes present in SLL
    else {
        node* temp = head;
        head = head->next;
        delete temp;
        cout<<"Deleted the first node" << endl;
    }
}

void printSLL(node* head) {
    node* temp = head;
    if(head==NULL)
        cout<< "SLL is empty!" << endl;
    else {
        cout<<endl<< "head -> ";
        while(temp!=NULL) {
            cout<< temp->data << " -> ";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

int main() {
    node* head = NULL;
    int choice, val;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Insert at End" << endl;
        cout << "2. Insert at Front" << endl;
        cout << "3. Delete at End" << endl;
        cout << "4. Delete at Front" << endl;
        cout << "5. Print Linked List" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to insert at end: ";
                cin >> val;
                insertAtEnd(head, val);
                printSLL(head);
                break;

            case 2:
                cout << "Enter value to insert at front: ";
                cin >> val;
                insertAtFront(head, val);
                printSLL(head);
                break;

            case 3:
                deleteAtEnd(head);
                printSLL(head);
                break;

            case 4:
                deleteAtFront(head);
                printSLL(head);
                break;

            case 5:
                printSLL(head);
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please enter again." << endl;
        }
    } while(choice != 6);

    return 0;
}