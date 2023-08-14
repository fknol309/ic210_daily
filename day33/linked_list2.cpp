#include <iostream>
#include <cinttypes>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void add_node(int val, Node** LIST);

int main() {
    Node* LIST = NULL;

    add_node(2, &LIST);
    add_node(1, &LIST);

    cout << LIST->data << endl;
    cout << (LIST->next)->data << endl;

    return 0;
}

void add_node(int val, Node** LIST) {
    Node* tmp = new Node;
    tmp->data = val;
    tmp->next = *LIST;
    *LIST     = tmp;    
}

