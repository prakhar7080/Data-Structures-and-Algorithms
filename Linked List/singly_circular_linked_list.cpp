#include<iostream>
#include<vector>
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
            temp->next = newnode;
            temp = temp->next;
        }
    }
    temp->next = head;
    cout<<head->data<<" ";
    temp = head->next;
    while(temp!=head) {
        cout << temp->data << " ";
        temp = temp->next;
    }   
    cout << endl;
}
