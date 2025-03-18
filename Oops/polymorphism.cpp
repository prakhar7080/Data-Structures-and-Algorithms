#include <iostream>
using namespace std;
//Function overloading

// class area {
// public:
//     double calculatearea(int r) {
//         return 3.14*r*r;
//     }
//     int calculatearea(int l, int b) {
//         return l*b;
//     }
// };
// int main() {
//     area a1,a2;
//     cout << "Area of Circle: " << a1.calculatearea(4) << endl;
//     cout << "Area of Rectangle: " << a2.calculatearea(3, 4) << endl;
//     return 0;
// }

//Operator Overloading

// class complex{
//     int real,img;
//     public:
//         complex(int real, int img){
//             this->real = real;
//             this->img = img;
//         }
//         complex(){

//         }
//     void display(){
//         cout<<real<<" +i"<<img;
//     }
//     complex operator +(complex &c){
//         complex ans;
//         ans.real = real+c.real;
//         ans.img = img+c.img;
//         return ans;
//     }
// };
// int main(){
//     complex c1(3,4);
//     complex c2(4,6);
//     complex c3 = c1+c2;
//     c3.display();
// }

//Virtual Function 

class animal{
    public:
    virtual void speak(){
        cout<<"HuHu\n";
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"Bark\n";
    }
};
int main(){
    animal *p;
    p = new dog();
    p->speak();
}
