#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front,rear;
    int size;
    public:
    queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear == size-1;
    }
    void push(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[front] = x;
        }
        else if(isFull()){
            cout<<"Queue overflow "<<endl;
        }
        else{
            rear++;
            arr[rear] = x;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue underflow "<<endl;
        }
        else{
            if(front == rear){
                front = rear = -1;
            }
            else{
                front++;
            }
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    void display(){
        int temp = front;
        while(temp<=rear){
            cout<<arr[temp]<<" ";
            temp++;
        }
    }
};

int main(){
    queue a(5);
    a.push(5);
    a.push(6);
    a.display();
    a.pop();
    a.pop();
    a.pop();
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.display();
    cout<<a.start()<<endl;
    a.display();
}
