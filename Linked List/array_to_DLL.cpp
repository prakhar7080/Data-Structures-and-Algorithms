#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};
int main(){
    Node *head = NULL;
    Node *temp = NULL;
    Node *tail = NULL;
    vector<int>arr = {1,2,3,4,5};
    for(int i=0;i<arr.size();i++){
        Node *newnode = new Node(arr[i]);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    temp = tail;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
}
