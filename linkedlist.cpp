#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node* &head, int data) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtPosition(node* &head, int pos, int d) {
    if (pos <= 0) {
        cout << "Invalid position." << endl;
        return;
    }

    if (pos == 1) {
        node* temp = new node(d);
        temp->next = head;
        head = temp;
        return;
    }

    node* temp = head;
    int cnt = 1;

    while (temp != nullptr && cnt < pos - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp == nullptr) {
        cout << "Invalid position." << endl;
        return;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void insertAtTail(node* &tail, int d) {
    node* temp = new node(d);
    if (tail == NULL) {
        // If the list is empty, make the new node both head and tail
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void printlist(node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    node* n = new node(10);


    node* head = n;
    node* tail = n;
    insertAtHead(head, 9);
    insertAtHead(head, 15);
    insertAtTail(tail, 20);
    insertAtPosition(head, 3, 11);
    printlist(n);

    return 0;
}
