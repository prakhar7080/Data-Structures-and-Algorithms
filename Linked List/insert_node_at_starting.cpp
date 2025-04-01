#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {}

    Node(int value) {
        data = value;
        next = NULL;
    }

    void display() {
        cout << "Data = " << data << endl;
    }
};

int main() {
    Node *head = new Node(10); 
    head->display();

    delete head;
    return 0;
}
