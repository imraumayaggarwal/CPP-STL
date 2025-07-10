#include<iostream>
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

void insertAtEnd(node*& head, int data) {
    node* newnode = new node(data);
    //newnode->next = head;
    // 1. CSLL is empty
    if(head==NULL) {
        head = newnode;
        newnode->next = head;
        cout<< "Inserted into empty CSLL!" << endl;
        return;
    }

    // 2. Node/Nodes exist
    node* temp = head;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = newnode;
    newnode->next = head;
    cout<< "Inserted At end!" << endl;
}

void insertAtFront(node* & head, int data) {
    node* newnode = new node(data);
    // 1. CSLL is empty
    if(head==NULL) {
        head = newnode;
        newnode->next = newnode;
        cout<< "Inserted into empty CSLL!" << endl;
        return;
    }

    // 2. Node/Nodes exist
    newnode->next = head;
    node * temp = head;
    while(temp->next!=head) 
        temp = temp->next;
    temp->next = newnode;
    head = newnode;
    cout<< "Inserted At front!" << endl;
}

void deleteAtEnd(node*& head) {

    // 1. CSLL is empty
    if(head==NULL) {
        cout<< "CSLL is empty!" <<endl;
        return;
    }

    // 2. Only one node in CSLL
    if (head->next == head) {
        delete head;
        head = NULL;
        cout << "Deleted the only node, CSLL is now empty!" << endl;
        return;
    }

    // 3. Nodes exist
    node * temp = head;
    while(temp->next->next!=head) {
        temp = temp->next;
    }
    node* tail = temp->next;
    temp->next = head;
    delete tail;
    cout <<"Node at end deleted!" << endl;
}

void deleteAtFront(node*& head) {

    // 1. CSLL is empty
    if (head == NULL) {
        cout << "CSLL is empty!" << endl;
        return;
    }

    // 2. Only one node in CSLL
    if (head->next == head) {
        delete head;
        head = NULL;
        cout << "Deleted the only node, CSLL is now empty!" << endl;
        return;
    }

    // 3. Nodes exist
    node* temp = head;
    node* tail = head;
    while (tail->next != head)
        tail = tail->next;
    head = head->next;
    tail->next = head;
    delete temp;
    cout << "Node at front deleted!" << endl;
}

void printCSLL(node* head) {
    if (head == NULL) {
        cout << "CSLL is empty!" << endl;
        return;
    }

    node* temp = head;
    cout << "head -> ";
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

int main() {
    node* head = NULL;
    int choice, val;

    do {
        cout << "\n=== Circular Singly Linked List Menu ===" << endl;
        cout << "1. Insert at Front" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Delete at End" << endl;
        cout << "4. Delete at Front" << endl;
        cout << "5. Print List" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at end: ";
                cin >> val;
                insertAtFront(head, val);
                printCSLL(head);
                break;

            case 2:
                cout << "Enter the value to insert at front: ";
                cin >> val;
                insertAtEnd(head,val);
                printCSLL(head);
                break;

            case 3:
                deleteAtEnd(head);
                printCSLL(head);
                break;

            case 4:
                deleteAtFront(head);
                printCSLL(head);
                break;

            case 5:
                printCSLL(head);
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}