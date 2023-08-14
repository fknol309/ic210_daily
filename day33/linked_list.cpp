#include <iostream>
#include <cinttypes>
using namespace std;

struct Node {
    int data;
    Node* next;
};


int main() {
    Node* LIST = new Node;
    LIST->data = 2;
    LIST->next = NULL;

    Node* tmp  = new Node;
    tmp->data  = 1;
    tmp->next  = LIST;
    LIST       = tmp;

    cout << LIST->data << endl;
    cout << (LIST->next)->data << endl;

    return 0;
}

