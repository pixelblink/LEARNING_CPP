#include <iostream>
using namespace std;
//multi function class
class sub{
int a,b;
public:void sum();
void subt();
void mul();
void div();
};
void sub::sum(){
    a=90;
    b=90;
    cout<<"result="<<a+b<<endl;
}
void sub::subt(){
    a=90;
    b=90;
    cout<<"result="<<a-b<<endl;
}
void sub::mul(){
    a=90;
    b=90;
    cout<<"result="<<a*b<<endl;
}
void sub::div(){
    a=90;
    b=90;
    cout<<"result="<<a/b<<endl;
}



int main(){
    
    sub suiiiiiiiiiii;
    suiiiiiiiiiii.sum();
    suiiiiiiiiiii.subt();
    suiiiiiiiiiii.mul();
    suiiiiiiiiiii.div();

    return 0;
}