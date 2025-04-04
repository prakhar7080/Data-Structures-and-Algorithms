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

Node *Create_dll(int arr[],int index,int size,Node*back){
    if(index == size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = Create_dll(arr,index+1,size,temp);
    return temp;
}
int main(){
    int arr[] = {53,63,74,532,12,2414};
    Node*head = Create_dll(arr,0,6,NULL);
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
