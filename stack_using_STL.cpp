#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(6);
    s.push(7);
    s.push(8);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
}
