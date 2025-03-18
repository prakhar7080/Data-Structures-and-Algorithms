#include<iostream>
using namespace std;
class student{
    public:
    void print(){
        cout<<"I am student \n";
    }
};
class male{
    public:
    void maleprint(){
        cout<<"I am male \n";
    }
};
class female{
    public:
    void femaleprint(){
        cout<<"I am female \n";
    }
};
class boy:public male,public student{
    public:
    void boyprint(){
        cout<<"I am boy \n";
    }
};
class girl:public female,public student{
    public:
    void girlprint(){
        cout<<"I am girl \n";
    }
};
int main(){
    girl g1;
    g1.femaleprint();
    g1.girlprint();
    g1.print();
    boy b1;
    b1.maleprint();
    b1.boyprint();
    b1.print();
}
