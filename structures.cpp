#include <iostream>
using namespace std;

struct pixel{
    int a=10;  //data member

    void show(){  //member function / method
        cout<<"haiiiii";
    }
};

int main(){

    pixel obj;
    cout<<obj.a<<endl;
    obj.show();                 //  .  -> member operator



    return 0;}