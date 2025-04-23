#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class queue{
    Node *front;
    Node *rear;
    public:
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x){
        Node *newnode = new Node(x);
        if(front == NULL){
            front = newnode;
            rear = newnode;
        }
        else{
            rear->next = newnode;
            rear =  newnode;
        }
    }
    void dequeue(){
        if(front == NULL){
            cout<<"Queue Underflow "<<endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
    }
    void display(){
        Node *ptr = front;
        while(ptr){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
    bool isEmpty(){
        return front == NULL;
    }
};

int main(){
    queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.display();
}
