#include<iostream>
using namespace std;
class engineer{
    public:
    string specilization;
    
    void work(){
        cout<<"I have specilization in "<<specilization<<endl;
    }
};
class youtuber{
    public:
    int subscriber;
    
    void content_creator(){
        cout<<"I have a subscriber base of "<<subscriber<<endl;
    }
};

class CodeTeacher:public engineer, public youtuber{
    public:
    string name;
    CodeTeacher(string name,int subscriber, string specilization){
        this->name = name;
        this->subscriber = subscriber;
        this->specilization = specilization;
    }
    
    void showCase(){
        cout<<"My name is "<<name<<endl;
        // cout<<"I have subscriber base of "<<subscriber<<endl;
        // cout<<"I have specilization in "<<specilization<<endl;
        content_creator();
        work();
    }
};
int main(){
    CodeTeacher a1("Prakhar",20,"Data Science");
    a1.showCase();
}
