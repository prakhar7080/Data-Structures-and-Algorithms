#include<iostream>
using namespace std;
class customer{
    //class data
    string name;
    int account_number;
    int balance;
    
    public:
    //constructor
    customer(){
        // cout<<"customer called"<<endl;
    }
    //3 argument constructor
    customer(string a,int b,int c): name(a),account_number(b),balance(c){
    }
    //1 argument constructor
    customer(string name){
        this->name = name;
    }
    //2 argument constructor
    customer(string a,int b){
        this->name = a;
        this->account_number = b;
    }
    //print function
    void print(){
        if(name.length() == 0){
            cout<<"Name not assigned"<<endl;
        }
        else{
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
        }
    }
    //copy constructor
    customer(customer &b){
        name = b.name;
        account_number = b.account_number;
        balance = b.balance;
    }
};
int main(){
    customer a3("mohit");
    customer a2("xyz",124);
    customer a1("prakhar",123,7080);
    a3.print();
    a2.print();
    a1.print();
    customer a4(a1);
    a4.print();
    customer a5 = a3;
    a5.print();
}
