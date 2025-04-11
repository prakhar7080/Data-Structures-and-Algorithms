#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class stack{
    Node *top;
    int size;
    public:
    stack(){
        top = NULL;
        size = 0;
    }
    void push(int value){
        Node *temp = new Node(value);
        if(temp == NULL){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            cout<<"Pushed "<<value<<" In to the stack"<<endl;
            temp->next = top;
            top = temp;
            size++;
        }
    }
    void pop(){
        if(top == NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            Node *temp = top;
            cout<<"Poped "<<top->data<<" From Stack"<<endl;
            top = top->next;
            delete temp;
            size--;
        }
    }
    int peek(){
        if(top == NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return top == NULL;
    }
    int isSize(){
        return size;
    }
};
int main(){
    stack s;
    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);
    s.pop();
    cout<<s.isSize()<<endl;
    cout<<s.peek()<<endl;
}
