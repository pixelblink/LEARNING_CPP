#include<iostream>
using namespace std;
// function overloading
// defination:- a class having more than one function with similar name but have a diffrent parameter 
// is called function overloading

// specifiers: public private and protected
// it is used to specify the accessibility of a function

class joy{
    public:void sum(){
        cout<<"hii this is 1st function \n";
    }
    void sum(int a, int b){
        cout<<a+b<<"\n";
    }
    void sum(int w){
        cout<<67+w;
    }
};

int main(){
    joy j;

    j.sum();
    j.sum(4,5);
    j.sum(96);







    return 0;
}
