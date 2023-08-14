#include <iostream>
#include <cinttypes>
using namespace std;

struct Node {
    int data;
    Node* next;
};


int main() {
    Node first;
    first.data = 4;
    Node* LIST = &first;

    Node second;
    second.data = 3;
    second.next = &first;
    LIST = &second;

    Node third;
    third.data = 2;
    third.next = &second;
    LIST = &third;    

    Node fourth;
    fourth.data = 1;
    fourth.next = &third;
    LIST = &fourth;

    cout << LIST->data << endl;
    cout << (LIST->next)->data << endl;
    cout << ((LIST->next)->next)->data << endl;
    cout << (((LIST->next)->next)->next)->data << endl;




    return 0;
}

