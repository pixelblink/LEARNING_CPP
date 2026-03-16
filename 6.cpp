#include<iostream>
using namespace std;
// ===================CONSTRUCTOR===================
// defination:- it is used to allocate the memory of an object
// it doesn't return any value 
// it is also called special function
// the function name is similar to a class name in a constructor
// constructor is ACTIVATED when the object of an class is CREATED
// "default specifier of constructor is public"
// there are 3 types of constructor
// 1. Default constructor
// 2. Parameterised constructor
// 3. Copy constructor



// ====================DESTRUCTOR====================
// 



// class joy{
// public:joy(){
//     cout<<"dis is an example of defaaaaaaaault constructor \n";
// }

// joy(int a){
//     cout<<a<<"dis is an example of parameterised constructor";
// }
// };

// int main(){

// joy j;
// joy k(500);
//     return 0;
// }


//  ===============COPY CONSTRUCTOR===============
// class rbi{
//     int amount;
//     int balance;
//     public:rbi(){
//         amount=10000;
//     }
//     rbi(rbi & obj){
//         balance=obj.amount;
//         cout<<"balance= "<<balance<<"\n";
//     }
// };
// int main(){

// rbi sbi;
// rbi pnb(sbi);

// pnb;
//     return 0;
// }






class hello{
    int a;
    public:hello(){
        cout<<"activated\n";
    }
    ~hello(){
        cout<<"memory created\n";
    }
    void display(){
        cout<<"\n byebyebye \n";
    }
};
int main(){
    hello h;
    h.display();

    return 0;
}