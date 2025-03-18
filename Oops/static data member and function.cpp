#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int acc_number;
    int balance;
    static int total_customer;
    static int total_amount;
    public:
    customer(string name,int acc_number,int balance){
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
        total_customer++;
        total_amount = total_amount + balance;
    }
    static void display_total_customer(){
        cout<<"Total customer : "<<total_customer<<endl;
        cout<<endl;
    }
    static void display_total_amount(){
        cout<<"Total amount : "<<total_amount<<endl;
        cout<<endl;
    }
    void deposit(int amount){
        if(amount>0){
            balance = balance + amount;
            total_amount = total_amount + amount;
        }
    }
    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_amount-=amount;
        }
    }
    void display(){
        cout<<"Name: "<<name<<"\n"<<"Account number: "<<acc_number<<"\n"<<
        "Balance: "<<balance<<"\n"<<"Total customer: "<<total_customer<<endl;
        cout<<endl;
    }
    void no_total_customer(){
        cout<<"Total customer : "<<total_customer<<endl;
        cout<<endl;
    }
    
};
int customer::total_customer=0;
int customer::total_amount=0;
int main(){
    customer a1("prakhar",123,7080);
    customer a2("xyz",124,9140);
    customer a3("karan",125,7084);
    customer a4("abc",126,8467);
    // a1.display();
    // a4.display();
    // customer::total_customer = 6;
    // a1.no_total_customer();
    customer::display_total_customer();
    customer::display_total_amount();
    a1.display();
    a1.deposit(1000);
    a1.display();
    customer::display_total_amount();
    a1.withdraw(2000);
    a1.display();
    customer::display_total_amount();
}
