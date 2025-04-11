#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;
    public:
    stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value){
        if(top == size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = value;
        cout<<"Pushed "<<value<<" in to the stack"<<endl;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
        cout<<"Poped "<<arr[top+1]<<" from the stack"<<endl;
    }
    int peek(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
    int isSize(){
        return top+1;
    }
};

int main(){
    stack s(5);
    s.push(5);
    s.push(6);
    s.push(8);
    s.pop();
    cout<<s.peek();
}
