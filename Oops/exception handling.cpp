#include<iostream>
using namespace std;
class InvalidAmmountError : public runtime_error{
    public:
    InvalidAmmountError(const string &msg):runtime_error(msg){};
};
class Customer{
    string name;
    int balance;
    int account_number;

    public:
    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }
    void deposit(int amount){
        if(amount>=0){
            balance+=amount;
            cout<<amount<<" rs is credited successfully"<<endl;
        }
        else{
            throw runtime_error("Amount should be greater than zero");
        }
    }
    void withdraw(int amount){
        if(amount>0 && balance>=amount){
            balance-=amount;
            cout<<amount<<" rs is debited successfully"<<endl;
        }
        else if(amount<=0){
            throw InvalidAmmountError("Amount should be greater than zero");
        }
        else{
            throw runtime_error("Balance is low");
        }
    }
};
int main(){
    Customer c1("prakhar",15000,7080);
    try{
    c1.deposit(2000);
    c1.withdraw(18000);
    }
    catch(const InvalidAmmountError &e){
        cout<<"Exception Occured: "<<e.what()<<endl;
    }
    catch(const bad_alloc &e){
        cout<<"Exception Occured: "<<e.what()<<endl;
    }
    catch(...){
        cout<<"Exception Occured"<<endl;
    }
}
