#include<iostream>
using namespace std;

class node {
    public:
        node* prev;
        int data;
        node* next;

        node(int data1) {
            prev = NULL;
            data = data1;
            next = NULL;
        }
};

void insertAtEnd(node*& head, int data) {
    node* newnode = new node(data);

    if(head == NULL) {
        head = newnode;
        newnode->prev = head;
        newnode->next = head;
        cout << "Node inserted into empty CDLL!" << endl;
        return;
    }
    node* temp = head;
    while(temp->next!=head) {
        temp = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = head;
    head->prev = newnode;
    cout << "Node instered at end!" << endl;
}

void insertAtFront(node*& head, int data) {
    node* newnode = new node(data);

    if(head == NULL) {
        head = newnode;
        newnode->prev = head;
        newnode->next = head;
        cout << "Node inserted into empty CDLL!" << endl;
        return;
    }
    node* temp = head;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void deleteAtFront(node*& head) {

    if(head == NULL) {
        cout << "CDLL is empty!" << endl;
        return;
    }
    if(head->next == head) {
        delete head;
        head = NULL;
        cout << "Deleted the node!" << endl;
        return;
    }
    node* temp = head;
    while(temp->next!=head)
        temp = temp->next;
    node* front = head;
    head = head->next;
    delete front;
    head->prev = temp;
    temp->next = head;
    cout << "Deleted at front!" << endl;
}

void deleteAtEnd(node*& head) {

    if(head == NULL) {
        cout << "CDLL is empty!" << endl;
        return;
    }
    if(head->next == head) {
        delete head;
        head = NULL;
        cout << "Deleted the node!" << endl;
        return;
    }
    node* temp = head;
    while(temp->next->next!=head)
        temp = temp->next;
    node* tail = temp->next;
    delete tail;
    temp->next = head;
    head->prev = temp;
    cout << "Deleted at end!" << endl;
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
        cout << "\n=== Circular Doubly Linked List Menu ===" << endl;
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