#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;
    
    public:
    
    human(string name,int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"Name : "<<name<<endl
        <<"Age : "<<age<<endl;
    }
};

class student:public human{
    int roll_no;
    int fees;
    
    public:
    student(string name, int age, int roll_no, int fees):human(name,age){
        this->roll_no = roll_no;
        this->fees = fees;
    }
    
    void display(){
        cout<<"Name : "<<name<<endl
        <<"Age : "<<age<<endl
        <<"Roll No : "<<roll_no<<endl
        <<"Fees : "<<fees<<endl;
    }
};
int main(){
    student a1("prakhar",20,123,150000);
    a1.display();
}
