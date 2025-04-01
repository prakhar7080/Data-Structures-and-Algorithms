#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){}
    Node(int value){
        data = value;
        next = NULL;
    }
    void display(){
        cout<<"Data = ",data;
    }
};
int main(){
    Node *head;

}
