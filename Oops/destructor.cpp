#include<iostream>
using namespace std;
class customer{
    string name;
    int *balance;
    
    public:
    customer(){
        name = "4";
        cout<<"constructor is called"<<name<<endl;
    }
    customer(string name){
        this->name = name;
        cout<<"constructor is called"<<name<<endl;
    }
    //desctructor
    // ~customer(){
    //     cout<<name<<" "<<(*balance)<<endl;
    // }
    //can only create once
    ~customer(){
        cout<<"desctructor is called"<<name<<endl;
    }
};

int main(){
    customer a1("1"),a2("2"),a3("3");
    customer *a4 = new customer;
    delete a4;
}
