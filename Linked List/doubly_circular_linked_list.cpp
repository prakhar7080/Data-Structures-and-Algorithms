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
    vector<int>arr = {1,2,3,4,5};
    Node *head = NULL;
    Node *temp = NULL;
    for(int i=0;i<arr.size();i++){
        Node *newnode = new Node(arr[i]);
        if(head == NULL){
            head = newnode;
            temp = head;
        }
        else{
            newnode->prev = temp;
            temp->next = newnode;
            temp = temp->next;
        }
    }
    if(head){
        head->prev = temp;
        temp->next = head;
    }
}
