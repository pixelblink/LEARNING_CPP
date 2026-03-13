#include<iostream>
using namespace std;
// class sub{
//     // function declare and define inside a class
//     int a,b;
//     public:void sum(){ //declaration of a function
//         a=90;
//         b=90;
//         cout<<"result="<<a+b; //defination of a function
//     }
// };


class sub{
int a,b;
public:void sum();
};
void sub::sum(){
    a=90;
    b=90;
    cout<<"result="<<a+b;
}



int main(){
    // sub s;
    // s.sum();



    return 0;
}