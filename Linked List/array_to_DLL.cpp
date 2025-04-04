#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main(){
    vector<int>arr = {53,63,74,532,12,2414};
    Node *head = NULL;
    Node *tail = NULL;
    for(int i=0;i<arr.size();i++){
        Node *newnode = new Node(arr[i]);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    Node*ptr = head;
    cout<<"Printing in Normal order = "<<endl;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl<<"Printing in Reverse order = "<<endl;
    ptr = head;
    ptr = tail;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
}
